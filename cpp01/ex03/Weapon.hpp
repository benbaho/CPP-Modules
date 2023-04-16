/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:08:31 by bdurmus           #+#    #+#             */
/*   Updated: 2023/04/15 17:14:15 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon{
    private:
	    std::string _type;

    public:
	    Weapon(std::string);
	    ~Weapon();
	    std::string getType();
	    void setType(std::string);
};    

#endif
