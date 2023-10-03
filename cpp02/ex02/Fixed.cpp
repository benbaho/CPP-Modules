/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:49:43 by bdurmus           #+#    #+#             */
/*   Updated: 2023/07/23 18:14:17 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_number = 0;    
}

Fixed::Fixed(int number)
{
    this->fixed_number = (number << this->bit);
}

Fixed::Fixed(float number)
{
    this->fixed_number = std::roundf(number * 256);
}

Fixed::Fixed( const Fixed &number)
{
    *this = number;
}

Fixed &Fixed::operator++()
{   
    ++this->fixed_number;
    return (*this);
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

bool Fixed::operator<(const Fixed number)
{
    return (this->fixed_number < number.getRawBits());
}

bool Fixed::operator>(const Fixed number)
{
    return (this->fixed_number > number.getRawBits());
}

bool Fixed::operator>=(const Fixed number)
{
    return (this->fixed_number >= number.getRawBits());
}

bool Fixed::operator<=(const Fixed number)
{
    return (this->fixed_number <= number.getRawBits());
}

bool Fixed::operator==(const Fixed number)
{
    return (this->fixed_number == number.getRawBits());
}

bool Fixed::operator!=(const Fixed number)
{
    return (this->fixed_number != number.getRawBits());
}

Fixed &Fixed::operator--()
{
    --this->fixed_number;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed  temp(*this);
    this->fixed_number--;
    return (temp);
}

Fixed Fixed::operator++(int)
{
    Fixed  temp(*this);
    this->fixed_number++;
    return (temp);
}

Fixed Fixed::operator*(const Fixed number)
{
   float    calc = this->toFloat() * number.toFloat();
   Fixed    temp(calc);

   return(temp);
}

Fixed Fixed::operator+(const Fixed number)
{
   float    calc = this->toFloat() + number.toFloat();
   Fixed    temp(calc);

   return(temp);
}

Fixed Fixed::operator/(const Fixed number)
{
   float    calc = this->toFloat() / number.toFloat();
   Fixed    temp(calc);

   return(temp);
}

Fixed Fixed::operator-(const Fixed number)
{
   float    calc = this->toFloat() - number.toFloat();
   Fixed    temp(calc);

   return(temp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

Fixed::~Fixed()
{
    
}

std::ostream &operator<<(std::ostream & output,  Fixed const &number)
{
    output << number.toFloat();
    return output;
}   