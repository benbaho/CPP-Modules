/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:40:08 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/18 18:00:10 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

    private:
        Brain   *_brain;
    
    public:
        Cat();
        Cat(const Cat &tmp);
        ~Cat();
      
        Brain *getBrain() const;
        void makeSound() const;
        Cat operator=(const Cat &tmp);
};

#endif