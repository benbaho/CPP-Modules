/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:21:32 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/26 15:13:39 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void checkChars(std::string tmp)
{
    for (int i = 0; tmp[i];i++)
    {
        if (!(tmp[i] == '+' || tmp[i] == '-' || tmp[i] == '*' || tmp[i] == '/' || tmp[i] == ' ') && (tmp[i] >= 0 && tmp[i] <= 9)) 
            throw std::invalid_argument("Wrong char is used.");
    }
}


void exec(std::string tmp)
{
    checkChars(tmp);

    
}