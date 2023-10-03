/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:37:26 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/19 12:00:59 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

#include "Brain.hpp"


class Dog : public AAnimal {
    
    private:
        Brain   *_brain;
    
    public:
        Dog();
        Dog(const Dog &tmp);
        ~Dog();

        Brain *getBrain() const;
        void makeSound() const;
        Dog operator=(const Dog &tmp);


};

#endif