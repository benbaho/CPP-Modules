/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:43:44 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 18:59:00 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm::AForm("ShrubberyCreationForm", 145, 137){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &data) : AForm::AForm("ShrubberyCreationForm", 145, 137){
    *this = data;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
    	this->target = other.target;
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string newTarget) : AForm::AForm("ShrubberyCreationForm", 145, 137){
    target = newTarget;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getReqExec())
		throw (AForm::GradeTooLowException());
	else if (!this->getIsSigned())
		throw (AForm::IsNotSignedException());
	else
    {
        std::string fileName = target + "_shrubbery";
        std::ofstream file(fileName.c_str());
        if  (file.good())
        {
	    	file <<	"         v\n";
	    	file <<	"        >X<\n";
	    	file <<	"         A\n";
	    	file <<	"        d$b\n";
	    	file <<	"      .d\\$$b.\n";
	    	file <<	"    .d$i$$\\$$b.\n";
	    	file <<	"       d$$@b\n";
	    	file <<	"      d\\$$$ib\n";
	    	file <<	"    .d$$$\\$$$b\n";
	    	file <<	"  .d$$@$$$$\\$$ib.\n";
	    	file <<	"      d$$i$$b\n";
	    	file <<	"     d\\$$$$@$b\n";
	    	file <<	"  .d$@$$\\$$$$$@b.\n";
	    	file <<	".d$$$$i$$$\\$$$$$$b\n"; 
	    	file <<	"        ###\n"; 
	    	file <<	"        ###\n"; 
	    	file <<	"        ###\n"; 
            file.close();
        }
        else
            std::cout << "File not found" << std::endl;
    }
}