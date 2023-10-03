/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:44:51 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/14 17:48:17 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called." << std::endl;
    setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &tmp){
    std::cout << "WrongCat copy constructor called." << std::endl;
    this->type = tmp.getType();
}

WrongCat WrongCat::operator=(const WrongCat &tmp)
{
    std::cout << "WrongCat copy assigment constructor called." << std::endl;
    if (this != &tmp)
        setType(tmp.getType());
    return *this;
}

void WrongCat::makeSound() const{
    std::cout << "Meow!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called." << std::endl;
}
