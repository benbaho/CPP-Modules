/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:31:49 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/19 12:00:13 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called." << std::endl;
    for (int i = 0;i < 100; i++){
        this->ideas[i] = "Veni, vidi, vici";
    }
}

Brain::Brain(const Brain &tmp)
{
    std::cout << "Brain copy constructor called." << std::endl;
    *this = tmp;
}

Brain Brain::operator=(const Brain &b)
{
    std::cout << "Brain copy assigment constructor called." << std::endl;
    if ( this != &b ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i]= b.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}