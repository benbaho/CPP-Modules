/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:34:06 by bdurmus           #+#    #+#             */
/*   Updated: 2023/10/02 18:34:06 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _int(0), _float(0), _double(0), _char(0) {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
    *this = other;
}

void setInt(int i) {
    this->_int = i;
}

void setFloat(float f) {
    this->_float = f;
}

void setDouble(double d) {
    this->_double = d;
}

void setChar(char c) {
    this->_char = c;
}

int getInt() const {
    return this->_int;
}

float getFloat() const {
    return this->_float;
}

double getDouble() const {
    return this->_double;
}

char getChar() const {
    return this->_char;
}

bool isChar() {
    if (_str.length() == 1 && !std::isdigit(_str[0]) && !std::isalpha(_str[0]))
        return true;
    return false;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
    if (this != &other) {
        this->_int = other._int;
        this->_float = other._float;
        this->_double = other._double;
        this->_char = other._char;
    }
    return *this;
}

void ScalarConverter::convert(std::string str){
    this->_str = str;
    

}