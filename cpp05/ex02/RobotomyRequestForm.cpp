/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:43:39 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 19:12:42 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm::AForm("RobotomyRequestForm", 72, 45){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &data) : AForm::AForm("RobotomyRequestForm", 72, 45){
    *this = data;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{	
	if (this != &other)
    	this->target = other.target;
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string newTarget) : AForm::AForm("RobotomyRequestForm", 72, 45){    
    target = newTarget;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::srand(time(NULL));
    if (executor.getGrade() > this->getReqExec())
		throw (AForm::GradeTooLowException());
	else if (!this->getIsSigned())
		throw (AForm::IsNotSignedException());
	std::cout << "*DRILLING NOISES*" << std::endl;
	if ((std::rand() % 2))
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}