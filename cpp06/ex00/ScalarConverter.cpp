/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:41:39 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/15 20:08:34 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <climits>

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

int ScalarConverter::checkNan(const std::string &tmp)
{
    if (!tmp.compare("-inff") || !tmp.compare("+inff") || !tmp.compare("nanf"))
    {
        float a = atof(tmp.c_str());
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "char: " << "impossible"  << std::endl;
        std::cout << "float: " << static_cast<float>(a)  << std::endl;
        std::cout << "double: " << static_cast<double>(a) <<std::endl;
        return (1);
    }
    if (!tmp.compare("-inf") || !tmp.compare("+inf") || !tmp.compare("nan"))
    {
        double a = atof(tmp.c_str());
        std::cout << "char: " << "impossible"  << std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(a) <<"f" << std::endl;
        std::cout << "double: " << static_cast<double>(a) <<std::endl;
        return (1);
    }
    return (0);
}

void ScalarConverter::checkInt(const std::string &tmp)
{
        if (INT_MAX < atol(tmp.c_str()) || INT_MIN > atol(tmp.c_str())){
            std::cout << "char: " << "impossible" << std::endl;
            std::cout << "int : " << "impossible" << std::endl;
            std::cout << "float: " << static_cast<float>(atol(tmp.c_str())) <<  ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(atol(tmp.c_str()))<< ".0" <<std::endl;
        }
        else
        {
            int a = atoi(tmp.c_str());
            if (isprint(a))
                std::cout << "char: '" << static_cast<char>(a) <<"'" << std::endl;
            else
                std::cout << "char: " << "Non displayable" << std::endl;
            std::cout << "int : " << a << std::endl;
            std::cout << "float: " << static_cast<float>(a) <<  ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(a)<< ".0" <<std::endl;
        }
}

void ScalarConverter::checkAscii(const std::string &tmp){
    if (tmp.size() == 1  && isascii(tmp[0]))
    {
        char a = tmp[0];
        std::cout << "char: '" <<  a << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(a) << std::endl;
        std::cout << "float: " << static_cast<float>(a) <<  ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(a) << ".0" <<std::endl;
    }
}

void ScalarConverter::checkFloat(const std::string &tmp){
    if (std::numeric_limits<float>::min() > atof(tmp.c_str()) || atof(tmp.c_str()) > std::numeric_limits<float>::max()){
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "float: " << "impossible"  << std::endl;
        std::cout << "double: " << static_cast<double>(atof(tmp.c_str())) << std::endl;
    }
    else
    {    
        float a = atof(tmp.c_str());
        long long b = a;
        if (isprint(a))
            std::cout << "char: '" << static_cast<char>(a) <<"'" << std::endl;
        else
            std::cout << "char: " << "Non displayable" << std::endl;
        if (INT_MAX < b || INT_MIN > b)
            std::cout << "int: " << "impossible" << std::endl;
        else
            std::cout << "int : " << static_cast<int>(a) << std::endl;
        if (b - a != 0)
        {
            std::cout << "float: " << a <<  "f" << std::endl;
            std::cout << "double: " << static_cast<double>(a) <<std::endl;
        }
        else
        {
            std::cout << "float: " << a <<  ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(a) << ".0" <<std::endl;
        }
    }
}

void ScalarConverter::checkDouble(const std::string &tmp){
     if (std::numeric_limits<double>::min() > atof(tmp.c_str()) || atof(tmp.c_str()) > std::numeric_limits<double>::max()){
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "float: " << "impossible" << std::endl;
        std::cout << "double: " << "impossible" <<std::endl;
    }
    else
    {    
        double a = atof(tmp.c_str());
        long long b = a;
        if (isprint(a))
            std::cout << "char: '" << static_cast<char>(a) <<"'"<< std::endl;
        else
            std::cout << "char: " << "Non displayable" << std::endl;
        if (INT_MAX < b || INT_MIN > b)
            std::cout << "int: " << "impossible" << std::endl;
        else
            std::cout << "int : " << static_cast<int>(a) << std::endl;
        if (b - a != 0)
        {
            std::cout << "float: " << static_cast<float>(a) <<  "f" << std::endl;
            std::cout << "double: " << a <<std::endl;
        }
        else
        {
            std::cout << "float: " << static_cast<float>(a) <<  ".0f" << std::endl;
            std::cout << "double: " << a << ".0" <<std::endl;
        }
    }
}


void ScalarConverter::convert(const std::string &number)
{
    if (checkNan(number))
        return ;
    else if (number.size() != 1 && (ft_search(number, '.') || ft_search(number, '-') || ft_search(number, '+') || ft_search(number, 'f') || ft_search(number, 'e') || ft_search(number, 'E'))) 
        return (printTypes("impossible", "impossible", "impossible", "impossible"));
    else
    {   
        if (number.size() == 1 && !isdigit(number[0]))
            checkAscii(number);
        else if (ft_isdigit(number)) 
            checkInt(number);
        else if (ft_float(number))
            checkFloat(number);
        else if (ft_double(number))
            checkDouble(number);
        else
            printTypes("impossible", "impossible", "impossible", "impossible");
    }
}
