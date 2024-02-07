/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:41:39 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/08 00:17:59 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(std::string number) {
    (void)number;
}

ScalarConverter ScalarConverter::operator=(const ScalarConverter &tmp){
   *this = tmp;
   return *this;
}

ScalarConverter::~ScalarConverter(){}

void printTypes(std::string _char, std::string _int, std::string _double, std::string _float){
        std::cout << "char: " << _char << std::endl;
        std::cout << "int: " << _int << std::endl;
        std::cout << "float: " << _float << std::endl;
        std::cout << "double: " << _double << std::endl;
}

static int ScalarConverter::checkNonChars(const std::string &tmp){
    if (isprint(tmp[0]))
    {
        printTypes("Non Dispayeble", "0", "0.0f", "0.0");
        return (1);
    }
    return (0);
}       


static void ScalarConverter::convert(const std::string &number){
    checkNonChars(number);
}