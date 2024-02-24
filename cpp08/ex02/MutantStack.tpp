/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:57:50 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/24 17:07:16 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "MutantStack.hpp"
#include "deque"

template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other) { *this = other; }

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack& other) { this->std::stack<T> = std::stack<T>(other); }

template<typename T>
typename std::deque<T>::iterator MutantStack<T>::begin() { return this->begin(); }

template<typename T>
typename std::deque<T>::iterator MutantStack<T>::end() { return this->end(); }

