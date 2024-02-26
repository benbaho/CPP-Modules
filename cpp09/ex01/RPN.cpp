/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:21:32 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/26 18:12:12 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void checkForMath(std::stack<int> values, std::string tmp)
{
    std::string operators("*-+/");
    size_t c = 0;

    for (int i = 0; tmp[i]; i++)
    {
        if (operators.find(tmp[i]) != std::string::npos)
            c++;
    }
    if (c > values.size())
        throw std::invalid_argument("Error: Numbers can not less than operators");
}

void checkChars(std::string tmp)
{
    std::string chars("0123456789 -+*/");

    for (int i = 0; tmp[i];i++)
    {
        if (chars.find(tmp[i]) == std::string::npos) 
            throw std::invalid_argument("Error: There is a not allowed char.");
    }
}

void doMath(std::stack<int> values, std::string tmp)
{
    for (int i = 0; tmp[i]; i++)
    {
        if (tmp[i] != ' ')
        {
            if (tmp[i] == '+')
            {

            }
            else if (tmp[i] == '-')
            {

            }
            else if (tmp[i] == '*')
            {

            }
            else if (tmp[i] == '/')
            {
                
            }
        }
    }
    std::cout << values.top() << std::endl;
}



void exec(std::string arg)
{
    std::stack<int> values;
    std::stringstream forCheck(arg);
    std::string tmp;

    checkChars(arg);
    while (forCheck >> tmp)
    {
        int num = atoi(tmp.c_str());
        if (num < 0 || num > 9)
            throw std::out_of_range("Error: Number is not in 0-9.");
        if (num)
            values.push(num);
    }
    if (values.size() < 2)
        throw std::invalid_argument("Error: There are not enough numbers.");
    checkForMath(values, arg);
    doMath(values, arg);
}