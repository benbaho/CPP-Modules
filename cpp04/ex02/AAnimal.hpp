/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:31:11 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/19 13:35:10 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP


#include <iostream>


class AAnimal {

    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal &tmp);
        virtual ~AAnimal();

        void setType(std::string name);
        AAnimal &operator=(const AAnimal &tmp);
        
        virtual void makeSound() const = 0;;
        std::string getType() const;

};


#endif