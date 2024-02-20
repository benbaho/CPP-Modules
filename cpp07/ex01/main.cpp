/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:40:47 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/20 19:31:20 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() 
{ 
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Printing intArray elements:" << std::endl;
    iter(intArray, intArrayLength, printElement<int>);

    std::string strArray[] = {"apple", "banana", "cherry"};
    size_t strArrayLength = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "Printing strArray elements:" << std::endl;
    iter(strArray, strArrayLength, printElement<std::string>);

    return 0;
}