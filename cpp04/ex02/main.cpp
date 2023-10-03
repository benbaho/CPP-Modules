/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:30:27 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/19 13:01:14 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main ()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound();
    j->makeSound();
        
    delete j;//should not create a leak
    delete i;
    
    const int numAnimals = 4;
        AAnimal* animals[numAnimals];

        for (int i = 0; i < numAnimals / 2; ++i) {
            animals[i] = new Dog(); 
        }
        for (int i = numAnimals / 2; i < numAnimals; ++i) {
            animals[i] = new Cat();
        }
        for (int i = 0; i < numAnimals; ++i) {
            animals[i]->makeSound();
        }
        Dog* doggy = (Dog*)(animals[0]);
        std::cout << doggy->getBrain()->ideas[99] << std::endl;
        for (int i = 0; i < numAnimals; i++) {
            delete animals[i];
        }
    return (0);
}