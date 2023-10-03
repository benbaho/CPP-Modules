/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:30:10 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/14 22:30:10 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main (){
    
    Bureaucrat first;
    Bureaucrat second;
    AForm *form1 = new ShrubberyCreationForm();
    AForm *form2 = new RobotomyRequestForm();
    AForm *form3 = new PresidentialPardonForm();


    try {
        second.setName("test");
        first.setName("baho");
        form1->setName("shrubbery");
        form2->setName("robotomy");
        form3->setName("presidential");

        first.setGrade(150);
        form3->setGrade(1);
        form3->setSgrade(25);
        form3->beSigned(first);
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << form3->getSign() << std::endl;

    
   try {
        first.decrementGrade(12);
        second.setGrade(12);
        second = first;
    }
    catch (const Bureaucrat::GradeTooHighException &e){
        std::cout << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException &e) {   
        std::cout << e.what() << std::endl;
    }
}