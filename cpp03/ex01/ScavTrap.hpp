/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:59:44 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/08 19:02:23 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &tmp);
        ~ScavTrap();

        ScavTrap operator=(const ScavTrap &tmp);
        void attack(const std::string& target);
        void guardGate();
};

#endif