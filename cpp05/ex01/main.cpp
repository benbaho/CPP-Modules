/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:30:41 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 17:26:55 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{
        Bureaucrat a("Baho");
        a.setGrade(110);
        Form b("Alper", 140, 120);
        a.signForm(b);
    }
     catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }

    {
        Bureaucrat b("Martin");
        b.setGrade(1);
        Form x("Alper", 5, 10);
        b.signForm(x);
    }

    try{
        Bureaucrat c("benbaho");
        c.setGrade(157);
        std::cout << c;
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }
}