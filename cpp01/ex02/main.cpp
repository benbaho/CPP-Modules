/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:39:59 by bdurmus           #+#    #+#             */
/*   Updated: 2023/04/15 15:58:20 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string brain =  "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "string memory address      : " << &brain << std::endl;
    std::cout << "PTR memory address         : " << stringPTR << std::endl;
    std::cout << "REF memory address         : " << &stringREF << "\n" << std::endl;

    std::cout << "string value    : " << brain << std::endl;
    std::cout << "stringPTR value : " << *stringPTR << std::endl;
    std::cout << "stringREF value : " << stringREF << std::endl;
    
}