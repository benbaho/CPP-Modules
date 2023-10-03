/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:18:03 by bdurmus           #+#    #+#             */
/*   Updated: 2023/07/23 17:55:29 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_number = 0;
    
}

Fixed::Fixed( const Fixed &newNumbers)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(newNumbers.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &number)
{
    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &number)
        this->fixed_number = number.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_number;
}

void Fixed::setRawBits( int const raw )
{ 
    this->fixed_number = raw;
}