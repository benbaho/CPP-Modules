/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:16:48 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/18 17:30:42 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>

class Brain {

    public:
        Brain();
        Brain(const Brain &tmp);
        ~Brain();     
        std::string ideas[100];
        
        Brain operator=(const Brain &b);



};

#endif