/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:39:31 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/23 20:41:40 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iterator>
class Span {
    private:
        unsigned int maxSize;
        std::vector<int> intTmp;

    public:
        Span();
        Span(unsigned int N);
        Span(const Span &tmp);
        Span operator=(const Span &tmp);
        ~Span();

        void addNumber(long n);

        int shortestSpan() const;
        int longestSpan() const;

        void addMore(std::vector<int> tmp);
        void printNumbers();
};