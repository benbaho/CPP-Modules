/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:39:04 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/14 16:08:25 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called." << std::endl;
    setType("Dog");
}

Dog::Dog(const Dog &tmp){
    std::cout << "Dog copy constructor called." << std::endl;
    this->type = tmp.getType();

}

Dog Dog::operator=(const Dog &tmp)
{
    std::cout << "Dog copy assigment constructor called." << std::endl;
    if (this != &tmp)
        setType(tmp.getType());
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Hav Hav!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}

