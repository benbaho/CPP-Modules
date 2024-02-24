/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:57:53 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/24 18:36:47 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack();
        MutantStack(const MutantStack &tmp);
        MutantStack &operator=(const MutantStack &tmp);
        ~MutantStack();

        typedef typename std::deque<T>::iterator iterator;
        
        iterator begin();
        iterator end();

};

#include "MutantStack.tpp"