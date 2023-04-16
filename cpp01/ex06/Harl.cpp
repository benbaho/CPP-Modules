/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:24:15 by bdurmus           #+#    #+#             */
/*   Updated: 2023/04/16 16:03:09 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level)
{
	int 		i,a = -1;
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
	for (i = 0 ;  i < 4 ; i++)
		if (level == str[i])
            a = i;

	switch (a)
    {
    case 0:
        debug();
        info();
        warning();
        error();
        break;
    case 1:
        info();
        warning();
        error();
        break;
    case 2:
        warning();
        error();
        break;
    case 3:
        error();
        break;
    case -1:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
        break;
	default:
		break;
    }
}