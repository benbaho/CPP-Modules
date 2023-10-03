/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:34:17 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/09 18:17:49 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    setEnergy(10);
    setHealth(10);
    setDamage(0);
    std::cout << "Constructer called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructer called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (getEnergy() > 0 && getHealth() > 0){
        std::cout << getName() << " attacks " << target << ", causing " << getHealth() << " points of damage!" << std::endl;
        setEnergy(getEnergy() - 1);
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
        setHealth(getHealth() - amount);
        std::cout << getName() << " has taken " << amount << " damage" << std::endl;
}

void ClapTrap::setDamage(int damage)
{
    this->damage = damage;
}

void ClapTrap::setEnergy(int energy)
{
    this->energy = energy;    
}

void ClapTrap::setHealth(int health)
{
    this->health = health;
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

int ClapTrap::getEnergy() const
{
    return this->energy;
}

int ClapTrap::getHealth() const
{
    return this->health;
}

int ClapTrap::getDamage() const
{
    return this->damage;
}

std::string ClapTrap::getName() const
{
    return this->name;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergy() > 0 && getHealth() > 0) {
        setHealth(getHealth() + amount);
        setEnergy(getEnergy() - 1);
        std::cout << getName() << " has been repaired " << amount  << " points"  << std::endl;
    }
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Name Constructer called!" << std::endl;
    setName(name);
    setEnergy(10);
    setDamage(0);
    setHealth(10);
}

ClapTrap::ClapTrap(const ClapTrap &tmp)
{
    std::cout << "Copy Constructer called!" << std::endl;
    *this = tmp;
}

ClapTrap ClapTrap::operator=(const ClapTrap &tmp)
{
    setName(tmp.getName());
    setDamage(tmp.getDamage());
    setHealth(tmp.getHealth());
    setEnergy(tmp.getEnergy());
    return *this;
}



