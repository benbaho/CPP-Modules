/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:55:09 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/29 00:06:45 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void checkFile(std::fstream &tmp)
{
    std::string line;
    if (getline(tmp, line).eof())
    {
        tmp.close();
        throw std::invalid_argument("Error: File is empty.");
    }
}

void findValue(std::string key, std::string value)
{
    std::fstream file("data.csv", std::ios::in);
    std::fstream file1("data.csv", std::ios::in);
    std::string line;
    int i = 0;

    if (!file.is_open())
        throw std::invalid_argument("Error: Data file is not opened.");

    checkFile(file1);
    std::map<std::string, std::string> btcValues;
    while (std::getline(file, line))
    {   
        if (i++ != 0)
            btcValues[line.substr(0, line.find(','))] = line.substr(line.find(',') + 1);
    } 
    
    std::map<std::string, std::string>::iterator it = btcValues.find(key);
    if (it != btcValues.end())
        std::cout << it->first << " => " << value << " = " << atof(value.c_str()) * atof(it->second.c_str()) << std::endl;
    else
    {
        it = btcValues.upper_bound(key);
        --it;
        std::cout << key << " => " << value << " = " << atof(value.c_str()) * atof(it->second.c_str()) << std::endl;
    }
    file1.close();
    file.close();
}

int checkKey(std::string key)
{
    std::vector<std::string> tmp;
    std::stringstream number(key);
    std::string date;
    int c = 0;

    while (std::getline(number, date, '-'))
        tmp.push_back(date);

    for (std::vector<std::string>::iterator it = tmp.begin(); it != tmp.end();it++)
    {
        c += it->size();
        if (it->size() == 4)
        {
            if (atoi(it->c_str()) < 0)
                return (1);
        }
        else if (it->size() >= 2)
        {
            if ((atoi(it->c_str()) < 1 || atoi(it->c_str()) > 31)) 
            {
                std::cout << "Error: bad input => " << key << std::endl;
                return (1);
            }
        }
    }
    if (c != 8)
        return (std::cout << "Error: bad input => " << key << std::endl, 1);
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
            return (0);
    }
    return (1);
}

int checkChars(std::string tmp)
{
    std::string chars("0123456789 |-.");
    for (int i = 0; tmp[i];i++)
    {
        if (chars.find(tmp[i]) == std::string::npos)
        {
            std::cout << "Error: bad input => " << tmp << std::endl;
            return (1);
        }
    }
    return (0);
}

void exec(std::string tmp)
{
    std::fstream file(tmp, std::ios::in);
    std::fstream file1(tmp, std::ios::in);
    std::string line;

    int i = 0;
    
    if (!file.is_open())
        throw std::runtime_error("Error: Input file error.");
    else
    {
        checkFile(file1);
        while (std::getline(file, line))
        {
            if (i == 0){
                i++;
                continue;
            }
            std::string result;
            for (int i = 0; line[i];i++) {
                if (!std::isspace(line[i]))
                    result += line[i];
            }
            line = result;
            std::size_t pos = line.find('|');
            if (pos != std::string::npos)
            {
                std::string key = line.substr(0, pos);
                std::string value = line.substr(pos + 1);
                if (!checkChars(line) && !checkKey(key) && !checkValue(value))
                    findValue(key, value);
            }
            else
                if (line.size() > 0)
                    std::cout << "Error: bad input => " << line << std::endl;
            i++;
        }      
        file1.close();
        file.close();
    }
}