/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:30:41 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 18:56:23 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	{
		AForm *value = NULL;
		try {
			value = new ShrubberyCreationForm("Garden");
			Bureaucrat data("Umut");
        	data.setGrade(100);

			data.signForm(*value);
			data.executeForm(*value);
			delete value;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
			delete value;
		}
	}

	std::cout << "-----" << std::endl;
	
	{
		AForm *value = NULL;
		try {
			value = new RobotomyRequestForm("bumblebee");
			Bureaucrat data("Baho");
        	data.setGrade(10);
			data.signForm(*value);
			data.executeForm(*value);
			delete value;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
			delete value;
		}
	}
	std::cout << "-----" << std::endl;
	
	{
		AForm *value = NULL;
		try {
			value = new PresidentialPardonForm("Jester");
			Bureaucrat data("Alper");
			data.setGrade(5);
			data.signForm(*value);
			data.executeForm(*value);
			delete value;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
			delete value;
		}
	}	
}
