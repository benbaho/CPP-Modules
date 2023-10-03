/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:49:34 by bdurmus           #+#    #+#             */
/*   Updated: 2023/07/23 18:15:35 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

    private:
        static const int bit = 8;
        int fixed_number;

    public:
        Fixed();
        Fixed(float number);
        Fixed(int number);
        Fixed(const Fixed &number);
        ~Fixed();

		int   toInt( void ) const;
        int   getRawBits( void ) const;
		float toFloat( void ) const;
        
        bool operator>(const Fixed number);
        bool operator<(const Fixed number);
        bool operator>=(const Fixed number);
        bool operator<=(const Fixed number);
        bool operator==(const Fixed number);
        bool operator!=(const Fixed number);

        Fixed operator--(int);
        Fixed operator++(int);
        Fixed& operator--();
        Fixed& operator++();
        

        Fixed operator*(const Fixed number);
        Fixed operator+(const Fixed number);
        Fixed operator-(const Fixed number);
        Fixed operator/(const Fixed number);
            
        static  Fixed &min(Fixed &a,Fixed &b); 
        static  Fixed &max(Fixed &a,Fixed &b); 
        static const Fixed &max(const Fixed &a, const Fixed &b); 
        static const Fixed &min(const Fixed &a, const Fixed &b); 

    
};
    std::ostream & operator<<(std::ostream & output, Fixed const &number);
        
#endif