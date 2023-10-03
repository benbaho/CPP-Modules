/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:35:42 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/12 17:04:06 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("None"){
    std::cout << "Animal constructor called." << std::endl;
}

void Animal::setType(std::string name){
    this->type = name;
}

std::string Animal::getType() const{
    return this->type;
}

Animal::Animal(const Animal &tmp){
    std::cout << "Animal copy constructor called." << std::endl;
    this->type = tmp.getType();

}

Animal Animal::operator=(const Animal tmp){
    
    std::cout << "Animal copy assigment constructor called." << std::endl;
    if (this != &tmp)
        setType(tmp.getType());
    return *this;
}

void Animal::makeSound() const{
    std::cout << "No sound!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}
