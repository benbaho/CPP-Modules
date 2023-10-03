/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:30:27 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/19 12:22:50 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;


        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();


        delete (meta);
        delete (j);
        delete (i);
    }

    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* cat = new WrongCat();

        std::cout << meta->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;
        
        cat->makeSound(); //will output the cat sound!
        meta->makeSound();
        
        delete cat;            
        delete meta;
    }
    return (0);
}