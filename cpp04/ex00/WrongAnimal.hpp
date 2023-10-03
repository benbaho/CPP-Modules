/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:44:28 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/18 17:54:05 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include <iostream>


class WrongAnimal {

    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &tmp);
        virtual ~WrongAnimal();

        std::string getType() const;
        void setType(std::string name);

        void makeSound() const;
        WrongAnimal operator=(const WrongAnimal tmp);
};

#endif