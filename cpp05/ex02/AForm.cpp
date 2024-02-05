/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:54:44 by bdurmus           #+#    #+#             */
/*   Updated: 2023/12/27 23:05:32 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default"), reqGrade(150), reqExec(150), isSigned(false) {}

AForm::AForm(const std::string nick, const int grade, const int exec) : name(nick), reqGrade(grade), reqExec(exec), isSigned(false) {
    if (grade < 1 || exec < 1)
        throw GradeTooHighException();
    else if (grade > 150 || exec > 150)
        throw GradeTooLowException();
}

AForm &AForm::operator=(const AForm &tmp) {
    if (this != &tmp)
        this->isSigned = tmp.getIsSigned();
    return (*this);
}

std::string AForm::getName() const {
    return this->name;
}

int AForm::getReqGrade() const {
    return this->reqGrade;
}

int AForm::getReqExec() const {
    return this->reqExec;
}

bool AForm::getIsSigned() const {
    return this->isSigned;
}

void AForm::beSigned(const Bureaucrat &burea) {
    if (burea.getGrade() <= this->reqGrade)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

AForm::~AForm(){}

std::ostream& operator<<(std::ostream& os, const AForm& obj) {
    os  << " signed " << obj.getName() << std::endl;
    return os;
}