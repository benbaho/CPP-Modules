/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:41:39 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/09 22:18:02 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(std::string number) {
    (void)number;
}

ScalarConverter ScalarConverter::operator=(const ScalarConverter &tmp){
   if (this != &tmp)
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

int ScalarConverter::checkNonChars(const std::string &tmp){
    if (tmp.size() == 1)
    {
        std::cout << "char: " << "Non Displayable"  << std::endl;
        std::cout << "int : " << static_cast<int>(tmp[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(tmp[0]) << ".0f"<< std::endl;
        std::cout << "double: " << static_cast<double>(tmp[0]) << ".0" <<std::endl;

        return (1);
    }
    return (0);
}       

int ScalarConverter::checkNan(const std::string &tmp){
    if (!tmp.compare("-inff") || !tmp.compare("+inff") || !tmp.compare("nanf"))
    {
        float a = atof(tmp.c_str());
        std::cout << "char: " << "impossible"  << std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(a) <<  "f" << std::endl;
        std::cout << "double: " << static_cast<double>(a) <<std::endl;
        return (1);
    }
    if (!tmp.compare("-inf") || !tmp.compare("+inf") || !tmp.compare("nan"))
    {
        double a = atof(tmp.c_str());
        std::cout << "char: " << "impossible"  << std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(a) <<  "f" << std::endl;
        std::cout << "double: " << static_cast<double>(a) <<std::endl;
        return (1);
    }
    return (0);
}

int ScalarConverter::checkInt(const std::string &tmp){
    if (tmp.size() != 1)
    {
        if (INT_MAX < atol(tmp.c_str()) || INT_MIN > atol(tmp.c_str()))
            std::cout << "int : " << "impossible" << std::endl;
        int a = atoi(tmp.c_str());
        std::cout << "char: " << static_cast<char>(a) << std::endl;
        std::cout << "int : " << a << std::endl;
        std::cout << "float: " << static_cast<float>(a) <<  "f" << std::endl;
        float b = static_cast<float>(a);
        std::cout << "int : " << static_cast<int>(b) << std::endl;
        std::cout << "double: " << static_cast<double>(a) <<std::endl;

        return (1);
    }
    return (0);
}

int ScalarConverter::checkAscii(const std::string &tmp){
    if (tmp.size() == 1 && !isdigit(tmp[0]) && isascii(tmp[0]))
    {
        std::cout << static_cast<char>(tmp[0]) << std::endl;
        return (0);
    }
    return (1);
}


void ScalarConverter::convert(const std::string &number){
    if ( checkInt(number))
        return;

}