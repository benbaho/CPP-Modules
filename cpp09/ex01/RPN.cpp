/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:21:32 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/29 20:02:26 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void checkForMath(std::stack<int> values, std::string tmp)
{
    std::stringstream ss(tmp);
    std::string word;
    std::string operators("*-+/");
    size_t c = 0;

    for (int i = 0; tmp[i]; i++)
    {
        if (operators.find(tmp[i]) != std::string::npos)
            c++;
    }
    if (c >= values.size())
        throw std::invalid_argument("Error: Numbers can not less than operators");
    else if (c == 0)
        throw std::invalid_argument("Error: Need a operator.");
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

void doMath(std::string tmp)
{     
    std::stack<int> values;
    std::stringstream iss(tmp);
    std::string token;
    
    while (iss >> token)
    {   
        if (isdigit(token[0]))
            values.push(atoi(token.c_str()));
        else 
        {
            if (values.size() < 2)
                throw std::invalid_argument("Error: Not enough numbers to operator.");
                    
            int a = values.top(); values.pop();
            int b = values.top(); values.pop();

            if (token == "+")
                values.push(b + a);
            else if (token == "-")
                values.push(b - a);
            else if (token == "*") 
                values.push(b * a);
            else if (token == "/") 
            {
                if (a == 0)
                    throw std::invalid_argument("Error: Undefined calculate.");
                else
                    values.push(b / a);
            }
        } 
    }
    std::stack<int> stk;
    while (!values.empty()){
        stk.push(values.top());
        values.pop();
    }
    while (!stk.empty())
    {
        std::cout << stk.top() << " ";
        stk.pop();
    }   
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
        if (num < 0 || num > 9 || (tmp[0] == '-' && tmp[1] == '0'))
            throw std::out_of_range("Error: Number is not in 0-9.");
        if (tmp[0] == '0' || atoi(tmp.c_str()))
            values.push(num);
    }
    if (values.size() < 2)
        throw std::invalid_argument("Error: There are not enough numbers.");
    checkForMath(values, arg);
    doMath(arg);
}