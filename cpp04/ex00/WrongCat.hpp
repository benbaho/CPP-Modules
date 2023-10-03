/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:44:49 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/14 17:53:23 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

    public:
        WrongCat();
        WrongCat(const WrongCat &tmp);
        ~WrongCat();
      
        void makeSound() const;
        WrongCat operator=(const WrongCat &tmp);
};

#endif