/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:53:37 by bdurmus           #+#    #+#             */
/*   Updated: 2023/04/15 15:19:41 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie{
    
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void setname(std::string name);
        void announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif