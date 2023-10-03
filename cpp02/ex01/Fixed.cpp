/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:31:20 by bdurmus           #+#    #+#             */
/*   Updated: 2023/07/24 19:12:35 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int number)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_number = (number << this->bit);
}

Fixed::Fixed( const float number)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_number = roundf(number * 256);
}

Fixed::Fixed( const Fixed &number)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = number;
}

Fixed& Fixed::operator=( const Fixed &number)
{
    std::cout << "Copy assigment operator called" << std::endl;
    if ( this != &number )
        this->fixed_number = number.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return ((float)this->getRawBits() / 256);
}

int Fixed::toInt( void ) const 
{
    return (this->fixed_number >> this->bit);   
}

int Fixed::getRawBits( void ) const {
    return this->fixed_number;
}

std::ostream & operator<<(std::ostream & output,  Fixed const &number)
{
    output << number.toFloat();
    return output;
}   