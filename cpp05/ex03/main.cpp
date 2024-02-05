/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:30:41 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 19:35:44 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	Bureaucrat data("Baho");

	{
		Intern randomIntern;
		AForm* tmp = 0;
		try{
			data.setGrade(42);
			tmp = randomIntern.makeForm("shrubbery creation", "Test");
			if (tmp){
				data.signForm(*tmp);
				data.executeForm(*tmp);
				delete tmp;
			}
		}
		catch(std::exception & e){
    	    std::cout << e.what() << std::endl;
			delete tmp;
    	}
	}
	
	std::cout << "---------" << std::endl;

	{
		Intern randomIntern;
		AForm* tmp = 0;
		try{
			data.setGrade(42);
			tmp = randomIntern.makeForm("robotomy request", "Test2");
			if (tmp){
				data.signForm(*tmp);
				data.executeForm(*tmp);
				delete tmp;
			}
		}
		catch(std::exception & e){
    	    std::cout << e.what() << std::endl;
			delete tmp;
    	}
	}
	
	std::cout << "---------" << std::endl;

	{
		Intern randomIntern;
		AForm* tmp = 0;
		try{
			data.setGrade(5);
			tmp = randomIntern.makeForm("presidential pardon", "Test4");
			if (tmp){
				data.signForm(*tmp);
				data.executeForm(*tmp);
				delete tmp;
			}
		}
		catch(std::exception & e){
    	    std::cout << e.what() << std::endl;
			delete tmp;
    	}
	}
}