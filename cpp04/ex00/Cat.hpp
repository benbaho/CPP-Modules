/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:40:08 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/14 17:39:04 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

    public:
        Cat();
        Cat(const Cat &tmp);
        ~Cat();
      
        void makeSound() const;
        Cat operator=(const Cat &tmp);
};

#endif