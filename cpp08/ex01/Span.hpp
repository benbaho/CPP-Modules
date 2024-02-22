/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:39:31 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/22 18:08:54 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Span {
    private:
        std::vector<int> intTmp;
        unsigned int maxSize;

    public:
        Span();
        Span(unsigned int n);
        Span(const Span &tmp);
        Span operator=(const Span &tmp);
        ~Span();

        void addNumber(int n);

        int shortestSpan() const;
        int longestSpan() const;

};