/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 13:59:26 by bdurmus           #+#    #+#             */
/*   Updated: 2023/04/15 14:46:26 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie *z = newZombie("Foo");
    Zombie z2("foo2");
    z->announce();
    randomChump("heyo");
    delete(z);
}