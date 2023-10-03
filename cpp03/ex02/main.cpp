/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:34:26 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/08 20:12:47 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main ()
{
    ClapTrap mycls("esma");
    FragTrap cls2("ayşe");

    cls2.attack("ahmet");
    cls2.beRepaired(10);
    cls2.takeDamage(10);
    cls2.highFivesGuys();

    mycls.attack("bahadir");
    mycls.takeDamage(1);
    mycls.beRepaired(10);


    return (0);
}
