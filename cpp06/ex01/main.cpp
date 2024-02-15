/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:44:07 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/15 19:26:00 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *ds = new Data;
    ds->a = 42;
    
    std::cout << ds << std::endl;
    
    uintptr_t rawPtr = Serializer::serialize(ds);
    
    std::cout << rawPtr << std::endl;
    
    Data *tmp = NULL;
    
    tmp = Serializer::deserialize(rawPtr);
    
    std::cout << tmp << std::endl << tmp->a  << std::endl;
    
    delete ds;
}

