/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:28:02 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/20 20:35:44 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


template<typename T>
Array<T>::Array() : array(NULL), sizeOfArray(0) { }

template<typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), sizeOfArray(n) { }

template<typename T>
Array<T> Array<T>::operator=(const Array &tmp){
    if (this != &tmp)
    {
        if (array)
            delete[] array;
        array = new T[tmp.sizeOfArray];
        sizeOfArray = tmp.sizeOfArray;
        for (int i = 0; i < tmp.len(); i++)
            array[i] = tmp.array[i];
    }    
    return *this;
}

template<typename T>
Array<T>::Array(const Array &tmp) : array(new T[tmp.sizeOfArray]), sizeOfArray(tmp.size()) {
        for (unsigned int i = 0; i < tmp.size(); i++)
            array[i] = tmp.array[i];
}

template<typename T>
Array<T>::~Array(){
    if (array)
        delete[] array;
}

template<typename T>
unsigned int Array<T>::size() const {
    return sizeOfArray;
}

template<typename T>
T &Array<T>::operator[](int location){
    if (location < 0 || location >= static_cast<int>(sizeOfArray))
        throw std::out_of_range("Index is out of bounds.");
    return array[location];
}
