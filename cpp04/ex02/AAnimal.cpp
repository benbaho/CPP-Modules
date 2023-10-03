/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:35:42 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/15 20:25:24 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("None"){
    std::cout << "AAnimal constructor called." << std::endl;
}

void AAnimal::setType(std::string name){
    this->type = name;
}

std::string AAnimal::getType() const{
    return this->type;
}

AAnimal::AAnimal(const AAnimal &tmp){
    std::cout << "AAnimal copy constructor called." << std::endl;
    this->type = tmp.getType();

}

AAnimal &AAnimal::operator=(const AAnimal &tmp){
    
    std::cout << "AAnimal copy assigment constructor called." << std::endl;
    if (this != &tmp)
        setType(tmp.getType());
    return *this;
}

void AAnimal::makeSound() const{
    std::cout << "No sound!" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called." << std::endl;
}
