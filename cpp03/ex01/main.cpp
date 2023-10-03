/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:34:26 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/09 18:29:24 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main ()
{
    ClapTrap mycls("ayse");
    ScavTrap cls2("fatma");

    cls2.attack("bahadır");
    cls2.guardGate();
    cls2.beRepaired(10);
    cls2.takeDamage(10);

    mycls.attack("esma");
    mycls.takeDamage(1);
    mycls.beRepaired(10);

    return (0);
}
