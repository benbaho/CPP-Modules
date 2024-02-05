/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:54:44 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 18:09:26 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), reqGrade(150), reqExec(150), isSigned(false) {}

Form::Form(const std::string nick, const int grade, const int exec) : name(nick), reqGrade(grade), reqExec(exec), isSigned(false){
    if (grade < 1 || exec < 1)
        throw GradeTooHighException();
    else if (grade > 150 || exec > 150)
        throw GradeTooLowException();
}

Form Form::operator=(const Form &tmp) {
    if (this != &tmp)
        this->isSigned = tmp.getIsSigned();
    return (*this);
}

Form::~Form(){}

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

void Form::beSigned(const Bureaucrat &burea) {
    if (burea.getGrade() <= this->reqGrade)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
    os  << " signed " << obj.getName() << std::endl;
    return os;
}