/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:30:27 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/19 14:23:00 by bdurmus          ###   ########.fr       */
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
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        
        i->makeSound();
        j->makeSound();
        
        delete j;
        delete i;
        
        const int numAnimals = 4;
        Animal* animals[numAnimals];

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
        std::cout << doggy->getBrain()->ideas[5] << std::endl;
        for (int i = 0; i < numAnimals; ++i) {
            delete animals[i];
        }
    }
    return (0);
}