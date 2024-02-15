/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:47:30 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/15 19:25:58 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

typedef struct 
{
    float a;
} Data;



class Serializer {
    private:
        Serializer();
        Serializer(const Serializer &tmp);
        Serializer operator=(const Serializer &tmp);
        ~Serializer();

    public:

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};