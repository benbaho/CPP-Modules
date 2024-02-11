/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:41:30 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/11 22:01:10 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter {

    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(std::string number);
        ScalarConverter operator=(const ScalarConverter &tmp);
        


    public:
        static void checkAscii(const std::string &tmp);
        static int checkNan(const std::string &tmp);
        static void checkFloat(const std::string &tmp);
        static void checkDouble(const std::string &tmp);
        static int checkNonChars(const std::string &tmp);
        static void convert(const std::string &number);
        static void checkInt(const std::string &tmp);
};

int ft_isdigit(const std::string &tmp);
int ft_float(const std::string &tmp);
int ft_double(const std::string &tmp);
void printTypes(std::string _char, std::string _int, std::string _double, std::string _float);