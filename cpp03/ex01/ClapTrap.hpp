/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:34:23 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/08 18:58:15 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

    private:
        std::string            name;
        int         health;
        int         energy;
        int         damage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &tmp);
        ~ClapTrap(); 

        ClapTrap operator=(const ClapTrap &tmp);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        int getEnergy() const;
        int getDamage() const;
        int getHealth() const;
        std::string getName() const;

        void setName(std::string name);
        void setEnergy(int energy) ;
        void setDamage(int damage) ;
        void setHealth(int health) ;


};


#endif