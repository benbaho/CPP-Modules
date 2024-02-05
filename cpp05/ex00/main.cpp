/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 17:49:55 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 19:09:35 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    Bureaucrat b1("Test");
    Bureaucrat b2("Test2");

    {
        try {
            b1.setGrade(5);
            b2.setGrade(10);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << b1;
    std::cout << b2;
    
    { 
        try {
              b2.setGrade(157);
         }
         catch (std::exception &e) {
             std::cout << e.what() << std::endl;
         }
    }

    {
        try {
              b2.decrementGrade(5);
              b1.incrementGrade(2);
         }
         catch (std::exception &e) {
             std::cout << e.what() << std::endl;
         }
    }

    std::cout << b1;
    std::cout << b2;
}