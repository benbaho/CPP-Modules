/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:38:51 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/09 17:07:20 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &name);
        ~FragTrap();

        FragTrap operator=(const FragTrap &tmp);
        void highFivesGuys(void);

};


#endif