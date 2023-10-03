/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:40:59 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/19 11:57:13 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called." << std::endl;
    this->_brain = new Brain();
    setType("Cat");
}

Cat::Cat(const Cat &tmp){
    std::cout << "Cat copy constructor called." << std::endl;
    this->type = tmp.getType();
}

Cat Cat::operator=(const Cat &tmp)
{
    std::cout << "Cat copy assigment constructor called." << std::endl;
      if (this != &tmp)
    {
        this->type = tmp.type;
        this->_brain = tmp._brain;
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() const{
    return this->_brain;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
    delete _brain;
}

