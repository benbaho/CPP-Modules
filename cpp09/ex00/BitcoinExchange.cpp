/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:55:09 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/25 17:56:50 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int checkKey(std::string key)
{
    (void)key;
    return (0);
}

int checkValue(std::string value)
{
    std::stringstream tmp(value);

    double b;

    if (tmp >> b)
    {
        if (b < 0)
            return (std::cout << "Error: not a positive number." << std::endl, 1);
        else if (b > 1000)
            return (std::cout << "Error: too large a number." << std::endl, 1);
        else
            std::cout << value << std::endl;
            //return (0);
    }
    return (1);
}

void exec(std::string tmp)
{
    std::fstream file(tmp, std::ios::in);
    int i = 0;
    
    if (!file.is_open())
        throw std::runtime_error("Error: File is not opened.");
    else
    {
        std::map<std::string, std::string> myValues;
        for (std::string line; std::getline(file, line);)
        {
            std::size_t pos = line.find('|');
            if (i == 0){
                i++;
                continue;
            }
            if (pos != std::string::npos)
            {
                std::string key = line.substr(0, pos);
                std::string value = line.substr(pos + 1);
                if (!checkKey(key) && !checkValue(value))
                    myValues[key] = value;
            }
            else
                std::cout << "Error: bad input => " << line << std::endl;
            i++;
        }

      
        file.close();
    }
}