/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:44:32 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/14 17:46:31 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("None"){
    std::cout << "WrongAnimal constructor called." << std::endl;
}

void WrongAnimal::setType(std::string name){
    this->type = name;
}

std::string WrongAnimal::getType() const{
    return this->type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &tmp){
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    this->type = tmp.getType();

}

WrongAnimal WrongAnimal::operator=(const WrongAnimal tmp){
    
    std::cout << "WrongAnimal copy assigment constructor called." << std::endl;
    if (this != &tmp)
        setType(tmp.getType());
    return *this;
}

void WrongAnimal::makeSound() const{
    std::cout << "No sound!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}

