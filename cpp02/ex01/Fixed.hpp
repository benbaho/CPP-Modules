/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:31:11 by bdurmus           #+#    #+#             */
/*   Updated: 2023/07/23 18:00:50 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>


class Fixed {

	private:
		static const int bit = 8;
		int			fixed_number;
	
	public:
		Fixed( void );
		Fixed( const int number);
		Fixed( const float number);
		Fixed( const Fixed &number);
		~Fixed();
		
		Fixed & operator=( Fixed const &number);

		int   getRawBits( void ) const;
		int   toInt( void ) const;
		float toFloat( void ) const;
};

std::ostream & operator<<(std::ostream & output, Fixed const &number);

#endif