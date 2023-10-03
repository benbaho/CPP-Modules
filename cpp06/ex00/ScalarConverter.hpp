/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:04:43 by bdurmus           #+#    #+#             */
/*   Updated: 2023/10/02 18:04:43 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter{

    private:
        int         _int;
        float       _float;
        double      _double;
        char        _char;
        std::string _str;

    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ~ScalarConverter();
        ScalarConverter &operator=(const ScalarConverter &other);

        void    convert(std::string str);


        void  setInt(int i);
        void  setFloat(float f);
        void  setDouble(double d);
        void  setChar(char c);


        int    getInt() const;
        float  getFloat() const;
        double getDouble() const;
        char   getChar() const;

        bool isChar();
        bool isInt();
        bool isFloat();
        bool isDouble();


        class NonDisplayableException : public std::exception{
            public:
                virtual const char *what() const throw();
        };

};

#endif