/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:39:12 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 17:48:39 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(0) {}

Bureaucrat::Bureaucrat(std::string nick) : name(nick), grade(0) {}

Bureaucrat Bureaucrat::operator=(const Bureaucrat &tmp) {
    this->grade = tmp.grade;
    return *this;
}

std::string Bureaucrat::getName() const {
    return this->name;
}

void Bureaucrat::setGrade(int newgrade) {
    if (newgrade < 1)
        throw GradeTooHighException();
    else if (newgrade > 150)
        throw GradeTooLowException();
    else
        this->grade = newgrade;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void Bureaucrat::incrementGrade(int number){
    if (this->grade < 1 || this->grade - number < 1)
        throw GradeTooHighException();
    this->grade -= number;
}

void Bureaucrat::decrementGrade(int number){
    if (this->grade > 150 || this->grade + number > 150)
        throw GradeTooLowException();
    this->grade += number;
}

Bureaucrat::~Bureaucrat() {}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
    return os;
}

void Bureaucrat::executeForm(AForm const &form)
{
    try{
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}

void Bureaucrat::signForm(AForm &form)
{
    try{
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch(std::exception &e){
        std::cout << this->getName() << " couldn't sign " << form.getName() 
            << " because " << e.what() << std::endl;
    }
}