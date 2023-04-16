/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:30:32 by bdurmus           #+#    #+#             */
/*   Updated: 2023/04/16 15:36:25 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
    Harl    x;
    std::string tmp = av[1];
    
    if (ac == 2 && (!tmp.compare("ERROR") || !tmp.compare("WARNING") || !tmp.compare("INFO") || !tmp.compare("DEBUG")))
        x.complain(tmp);
    else
        std::cout << "Missing arguments or sth wrong" << std::endl;
}