/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:41:39 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/11 16:59:48 by bdurmus          ###   ########.fr       */
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



int ScalarConverter::checkNan(const std::string &tmp){
    if (!tmp.compare("-inff") || !tmp.compare("+inff") || !tmp.compare("nanf"))
    {
        float a = atof(tmp.c_str());
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "char: " << "impossible"  << std::endl;
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
        if (INT_MAX < atol(tmp.c_str()) || INT_MIN > atol(tmp.c_str())){
            std::cout << "char: " << "impossible" << std::endl;
            std::cout << "int : " << "impossible" << std::endl;
            std::cout << "float: " << static_cast<float>(atol(tmp.c_str())) <<  "f" << std::endl;
            std::cout << "double: " << static_cast<double>(atol(tmp.c_str())) <<std::endl;

        }
        else
        {
            int a = atoi(tmp.c_str());
            if (isprint(a))
                std::cout << "char: " << static_cast<char>(a) << std::endl;
            else
                std::cout << "char: " << "Non displayable" << std::endl;
            std::cout << "int : " << a << std::endl;
            std::cout << "float: " << static_cast<float>(a) <<  "f" << std::endl;
            std::cout << "double: " << static_cast<double>(a) <<std::endl;
        }
        return (1);
    }
    return (0);
}

int ScalarConverter::checkAscii(const std::string &tmp){
    if (tmp.size() == 1  && isascii(tmp[0]))
    {
        char a = tmp[0];
        if (isprint(a))
            std::cout << "char: " <<  a << std::endl;
        else
            std::cout << "char: " << "Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(a) << std::endl;
        std::cout << "float: " << static_cast<float>(a) <<  "f" << std::endl;
        std::cout << "double: " << static_cast<double>(a) <<std::endl;
        return (1);
    }
    return (0);
}


void ScalarConverter::convert(const std::string &number){
    if (checkAscii(number) || checkInt(number) )
        return;
    else    
        printTypes("impossible", "impossible", "impossible", "impossible");

}
