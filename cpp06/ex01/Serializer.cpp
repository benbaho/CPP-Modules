/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:10:22 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/13 19:45:19 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer &tmp){
    *this = tmp;
}

Serializer Serializer::operator=(const Serializer &tmp){
    (void)tmp;
    return *this;
}

Serializer::~Serializer(){}

uintptr_t Serializer::serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw){
    return (reinterpret_cast<Data *>(raw));
}
