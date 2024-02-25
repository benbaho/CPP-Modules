/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:45:06 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/25 14:03:19 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {
        Span sp = Span(5);
    
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    
    {
        try
        {
            int len = 4;
            Span sp = Span(len);


            std::vector<int> nums;
            std::srand(time(0));

            for (int i = 0; i < len; ++i) {
                nums.push_back(std::rand());
            }

            sp.addMore(nums);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            sp.printNumbers();

        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }

    
    return 0;
}