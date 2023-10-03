/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:29:31 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/24 17:11:12 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern &Intern::operator=(const Intern &tmp) {
    (void)tmp;
    return *this;
}

static AForm *makeShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

static AForm *makeRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

static AForm *makePresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}


AForm *Intern::makeForm(std::string name, std::string target){

    AForm *(*forms[3])(const std::string) = {&makeShrubberyCreationForm, &makeRobotomyRequestForm, &makePresidentialPardonForm};
    std::string texts[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    
    for (int i = 0;i < 3;i++){
        if (name == texts[i])
        {
            std::cout << "Intern-> Intern creates " << target << std::endl;
            return forms[i](target);
        } 
    }
    std::cout << "Intern-> " << name << " is not a valid form." << std::endl;
    return NULL;
}

Intern::Intern(const Intern &tmp) {
    *this = tmp;
}

Intern::~Intern() {}