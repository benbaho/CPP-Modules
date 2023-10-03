/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:34:26 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/09 18:40:23 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap mycls("ahmet");

    mycls.attack("bahadir");
    mycls.takeDamage(9);
    std::cout << "Energy :" << mycls.getEnergy() << std::endl;
    std::cout << "Health :" << mycls.getHealth() << std::endl;
    mycls.beRepaired(10);
    std::cout << "Energy :" << mycls.getEnergy() << std::endl;
    std::cout << "Health :" << mycls.getHealth() << std::endl;


    return (0);
}
