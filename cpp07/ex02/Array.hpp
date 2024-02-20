/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:13:08 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/20 20:14:21 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


template<typename T>
class Array {

    private:
        T *array;
        unsigned int sizeOfArray;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &tmp);
        Array operator=(const Array &tmp);
        T &operator[](int location);
        ~Array();

        unsigned int size() const;


};
