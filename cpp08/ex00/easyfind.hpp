/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:39:10 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/22 17:48:01 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

class NumberNotFound: public std::exception{
    const char *what() const throw(){
        return "Number not found in the contanier.";
    }
};

template<typename T>
int  easyfind(T &a, int sec){
    typename T::iterator it = std::find(a.begin(), a.end(), sec);
        if (it != a.end())
            return (sec);
    throw (NumberNotFound());
}