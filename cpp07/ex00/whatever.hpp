/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:29:31 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/20 19:14:12 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void swap(T &a, T &b){
    T tmp;
    
    tmp = b;
    b = a;
    a = tmp;
}

template<typename T>
T min(T a, T b){
    if (a < b)
        return (a);
    return (b);
}

template<typename T>
T max(T a, T b){
    if (a > b)
        return (a);
    return (b);
}
