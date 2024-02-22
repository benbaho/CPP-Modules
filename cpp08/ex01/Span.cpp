/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:50:13 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/22 18:09:05 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : maxSize(0) {}

Span::Span(unsigned int n) : maxSize(n){}

Span::Span(const Span &tmp){
    *this = tmp;
}

Span Span::operator=(const Span &tmp){
    if (this != &tmp){
        intTmp = tmp.intTmp;
        maxSize = tmp.maxSize;    
    }
    return *this;
}

Span::~Span(){}



void Span::addNumber(int n){
    if (intTmp.size() >= maxSize)
        throw std::runtime_error("Maximum capacity reached");
    intTmp.push_back(n);    
}

int Span::shortestSpan() const{
    if (intTmp.size() <= 1)
        throw std::runtime_error("There are no numbers or one number.");
    std::vector<int> tmp = intTmp;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 2; i < tmp.size();i++){
        int span = tmp[i] - tmp[i - 1];
        if (span < min)
            min = span;
    }
    return (min);
}

int Span::longestSpan() const{
    if (intTmp.size() <= 1)
        throw std::runtime_error("There are no numbers or one number.");
    std::vector<int> tmp = intTmp;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 2; i < tmp.size();i++){
        int span = tmp[i] - tmp[i - 1];
        if (span < min)
            min = span;
    }
    return (min);
}