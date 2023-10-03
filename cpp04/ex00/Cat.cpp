/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:40:59 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/14 16:33:40 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called." << std::endl;
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
        setType(tmp.getType());
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Meow!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
}

