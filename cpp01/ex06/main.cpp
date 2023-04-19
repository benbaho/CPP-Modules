/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:30:32 by bdurmus           #+#    #+#             */
/*   Updated: 2023/04/16 16:03:35 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
    Harl    x;
    
    if (ac == 2)
        x.complain(std::string(av[1]));
    else
        std::cout << "missing arguments or sth wrong" << std::endl;
}