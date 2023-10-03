/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:37:26 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/19 13:36:41 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal {
    
    private:
        Brain   *_brain;
    
    public:
        Dog();
        Dog(const Dog &tmp);
        ~Dog();

        void makeSound() const;
        Brain *getBrain() const;
        Dog operator=(const Dog &tmp);



};

#endif