/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:18:14 by bdurmus           #+#    #+#             */
/*   Updated: 2023/07/23 17:55:33 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

    private:
        int               fixed_number;
        static const int  bits = 8;
    
    public:
        Fixed();
        Fixed( const Fixed &newNumbers);
        ~Fixed();
        
        Fixed &operator=(const Fixed &number);

        int     getRawBits() const;
        void    setRawBits( int const raw );
};

#endif