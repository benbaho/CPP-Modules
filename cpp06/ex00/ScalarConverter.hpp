/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:41:30 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/08 00:17:02 by bdurmus          ###   ########.fr       */
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
        
        static int checkNonChars(const std::string &tmp);
        static void convert(const std::string &number);
};