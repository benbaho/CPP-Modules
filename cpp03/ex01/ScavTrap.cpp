/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:00:18 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/09 18:23:33 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap default constructor called!" << std::endl;
    setHealth(100);
    setEnergy(50);
    setDamage(20);
}

ScavTrap::~ScavTrap() {
   std::cout << "ScavTrap destructor called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string name){

    std::cout << "ScavTrap name constructor called!" << std::endl;
    setName(name);
    setHealth(100);
    setEnergy(50);
    setDamage(20);
}

ScavTrap ScavTrap::operator=(const ScavTrap &tmp)
{
    if (this != &tmp){
        setName(tmp.getName());
        setDamage(tmp.getDamage());
        setHealth(tmp.getHealth());
        setEnergy(tmp.getEnergy());
    }
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &tmp){
    std::cout << "ScavTrap Copy Constructer called!" << std::endl;
    *this = tmp;
}

void ScavTrap::guardGate(){

    std::cout << getName() << " is now in Gate keeper mode!" << std::endl;   
}

void ScavTrap::attack(const std::string& target)
{
    if (getEnergy() > 0 && getHealth() > 0){
        std::cout << getName() << " attacks " << target << ", causing " << getHealth() << " points of damage!" << std::endl;
        setEnergy(getEnergy() - 1);
    }
}