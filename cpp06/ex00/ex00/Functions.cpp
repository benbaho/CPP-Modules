/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:51:30 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/12 20:15:21 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int ft_isdigit(const std::string &tmp){
    for (int i = 0; tmp[i]; i++)
        if (!isdigit(tmp[i]) && !(tmp[i] == '-' || tmp[i] == '+'))
            return (0);
    return (1);
}

int ft_search(const std::string &tmp, char a){
    int c = 0;

    for (int i = 0; tmp[i]; i++){
        if (tmp[i] == a)
            c++;
    }
    if (a == '.')
    {
        if (tmp[0] == '.' || tmp[tmp.size()] == '.')
            return (1);
    }
    if (c > 1)
        return (1);
    return (0);
}



int ft_float(const std::string &tmp)
{
    if (tmp.size() != 1)
    {
        if ((!(tmp[tmp.find('f') + 1]) && isdigit(tmp[tmp.find('f') - 1])))
        {
            for (int i = 0; tmp[i];i++)
            {
                if (tmp[i] != 'f' && tmp[i] != '-' && tmp[i] != '+' && tmp[i] != '.' && tmp[i] != 'e' && tmp[i] != 'E'  && !isdigit(tmp[i]))
                    return (0);
            }
            return (1);
        }
    }
    return (0);
}



int ft_double(const std::string &tmp)
{
    if (tmp.size() != 1)
    {
        if (tmp[tmp.find('.') + 1] && tmp[tmp.find('.') - 1] && tmp.find('f') == std::string::npos)
        {
            for (int i = 0; tmp[i];i++)
            {
                if (tmp[i] != '.' && tmp[i] && tmp[i] != '-' && tmp[i] != '+' && tmp[i] != 'e' && tmp[i] != 'E'  && !isdigit(tmp[i]))
                    return (0);
            }
            return (1);
        }
    }
    return (0);
}

void printTypes(std::string _char, std::string _int, std::string _double, std::string _float){
        std::cout << "char: " << _char << std::endl;
        std::cout << "int: " << _int << std::endl;
        std::cout << "float: " << _float << std::endl;
        std::cout << "double: " << _double << std::endl;
}