/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:41:30 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/09 22:06:18 by bdurmus          ###   ########.fr       */
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
        static int checkAscii(const std::string &tmp);
        static int checkNan(const std::string &tmp);
        static int checkNonChars(const std::string &tmp);
        static void convert(const std::string &number);
        static int checkInt(const std::string &tmp);
};