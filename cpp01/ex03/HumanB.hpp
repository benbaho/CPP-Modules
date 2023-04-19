/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humanb.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:26:52 by bdurmus           #+#    #+#             */
/*   Updated: 2023/04/15 17:11:16 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
public:
	HumanB(std::string);
	~HumanB();
	void attack();
	void setWeapon(Weapon&);
private:
	Weapon		*_weapon;
	std::string	_name;
};

#endif
