/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:36:54 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 19:23:01 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern &tmp){
    (void)tmp;
}

Intern Intern::operator=(const Intern &tmp){
    (void)tmp;
    return *this;
}

AForm *Intern::ShrubberyCreation(std::string target){
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::RobotomyRequest(std::string target){
    return (new RobotomyRequestForm(target));
}

AForm *Intern::PresidentialPardon(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string functions[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++){
        if (functions[i] == name)
        {
            Intern tmp;
            
            std::cout << "Intern creates " << name << std::endl;
            AForm *(Intern::*func[3])(std::string) = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};
            AForm *form = (tmp.*(func[i]))(target);
            return (form);
        }
    } 
    std::cout << "Form name does not exist." << std::endl; 
    return (NULL);
}   