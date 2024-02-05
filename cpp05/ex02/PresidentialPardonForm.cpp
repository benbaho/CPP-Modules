/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:43:31 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 18:12:09 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm::AForm("PresidentialPardonForm", 25, 5), target("default"){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &data) : AForm::AForm("PresidentialPardonForm", 25, 5){
    *this = data;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
    if (this != &other)
        this->target = other.target;
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string newTarget) : AForm::AForm("PresidentialPardonForm", 25, 5){
    this->target = newTarget;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const 
{
    if (executor.getGrade() > this->getReqExec())
		throw (AForm::GradeTooLowException());
	else if (!this->getIsSigned())
		throw (AForm::IsNotSignedException());
    else
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}