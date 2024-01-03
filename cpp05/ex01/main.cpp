/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 17:49:55 by bdurmus           #+#    #+#             */
/*   Updated: 2023/12/25 20:41:42 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
     Bureaucrat b1("Test");
     Bureaucrat b2;

     try {
         b1.setGrade(5);
     }
     catch (std::exception &e) {
         std::cout << e.what() << std::endl;
     }

     std::cout << b1;
     std::cout << b2;
     
     try {
          b2.setName("Test2");
          b2.setGrade(150);
     }
     catch (std::exception &e) {
         std::cout << e.what() << std::endl;
     }

     try {
          b2.incrementGrade(5);
          b1.incrementGrade(5);
     }
     catch (std::exception &e) {
         std::cout << e.what() << std::endl;
     }

     std::cout << b1;
     std::cout << b2;

    Form f1("Form1", 5, 6);
    try {
        f1.beSigned(b1);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }    
}

