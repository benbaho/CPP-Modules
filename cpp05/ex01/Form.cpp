/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:54:44 by bdurmus           #+#    #+#             */
/*   Updated: 2023/12/27 23:05:32 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), reqGrade(-1), reqExec(-1), isSigned(false) {}

Form::Form(const std::string nick, const int grade, const int exec) : name(nick), reqGrade(grade), reqExec(exec) {
    if (grade < 1 || exec < 1)
        throw GradeTooHighException();
    else if (grade > 150 || exec > 150)
        throw GradeTooLowException();
}

std::string Form::getName() const {
    return this->name;
}

int Form::getReqGrade() const {
    return this->reqGrade;
}

int Form::getReqExec() const {
    return this->reqExec;
}

bool Form::getIsSigned() const {
    return this->isSigned;
}

void Form::beSigned(Bureaucrat &burea) {
    if (burea.getGrade() <= this->reqGrade)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

void Form::signForm(const Bureaucrat& burea) {
    if (this->isSigned)
        std::cout << burea.getName() << " signed " << this->getName() << std::endl;
    else
    {
        std::cout << burea.getName() << " couldn't sign " << this->getName() << " because ";
        if (burea.getGrade() > this->reqGrade)
            throw GradeTooLowException();
        else
            throw GradeTooHighException();
    }   
}

Form::~Form(){}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
    os  << " signed " << obj.getName() << std::endl;
    return os;
}