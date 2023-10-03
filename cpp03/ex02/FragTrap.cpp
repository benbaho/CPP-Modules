/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:38:39 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/09 18:23:12 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap default constructor called!" << std::endl;
    setHealth(100);
    setEnergy(100);
    setDamage(30);
}

FragTrap::FragTrap(std::string name){
    
    std::cout << "FragTrap name constructer called!" << std::endl;
    setName(name);
    setHealth(100);
    setEnergy(100);
    setDamage(30);
}

FragTrap::FragTrap(const FragTrap& name) {
    *this = name;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called!" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << getName() << " gives you high fives!" << std::endl;
}

FragTrap FragTrap::operator=(const FragTrap &tmp)
{
    if (this != &tmp){
        setName(tmp.getName());
        setDamage(tmp.getDamage());
        setHealth(tmp.getHealth());
        setEnergy(tmp.getEnergy());
    }
    return *this;
}
