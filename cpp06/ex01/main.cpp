/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:44:07 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/13 20:09:28 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    
    int c = 1;
    int *a = &c;

    float d = 1.0f;
    float *b = &d;

    b = reinterpret_cast<float*>(a);
    std::cout << *b << std::endl;

}