/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:40:43 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/20 12:00:21 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void iter(T *adr, size_t len, void (*func)(T)){
    for (size_t i = 0;i < len; i++)
        func(adr[i]);
    
}

template<typename T>
void printElement(T tmp){
    std::cout << tmp << std::endl;
}