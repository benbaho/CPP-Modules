/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:31:11 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/14 16:17:40 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>


class Animal {

    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &tmp);
        virtual ~Animal();

        std::string getType() const;
        void setType(std::string name);

        virtual void makeSound() const;
        Animal operator=(const Animal tmp);
};


#endif