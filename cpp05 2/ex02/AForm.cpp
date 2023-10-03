/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:59:32 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/14 22:59:32 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("undefined"), sign(false), grade(0), sgrade(0) { 
    std::cout << "AForm Default constructor called!" << std::endl;
}

AForm::AForm(std::string _name) : name(_name){
    std::cout << "AForm Name constructor called!" << std::endl;
}

AForm::AForm(const AForm &tmp){
    std::cout << "AForm Copy constructor called!" << std::endl;
    name = tmp.getName();
    grade = tmp.getGrade();
    sign = tmp.getSign();
    sgrade = tmp.getSgrade();
}

AForm &AForm::operator=(const AForm &Form){
    std::cout << "AForm Copy assigment constructor called!" << std::endl;
    if (this != &Form){
        name = Form.getName();
        grade = Form.getGrade();
        sign = Form.getSign();
        sgrade = Form.getSgrade();
    }
    return *this;
}

void AForm::setName(std::string newname){
    this->name = newname;
}

void AForm::setGrade(int _grade){
    if (_grade < 1)
        throw AForm::GradeTooLowException();
    else if (_grade > 150)
        throw AForm::GradeTooHighException();
    else
    this->grade = _grade;
}

void AForm::setSign(bool tmp){
    this->sign = tmp;
}

void AForm::setSgrade(int _sgrade){
    this->sgrade = _sgrade;
}

int AForm::getGrade() const{
    return this->grade;
}

std::string AForm::getName() const {
    return this->name;
}

bool AForm::getSign() const{
    return this->sign;
}

int AForm::getSgrade() const{
    return this->sgrade;
}

void AForm::incrementGrade(int value) 
{
    if ((this->grade - value) < 1)
        throw AForm::GradeTooHighException();
    this->grade -= value;
}

void AForm::decrementGrade(int value) 
{
    if ((this->grade + value) > 150)
        throw AForm::GradeTooLowException();
    this->grade += value;
}

void AForm::beSigned(Bureaucrat &burea){
    if (sgrade <= burea.getGrade())
        setSign(true);
    else
        throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const{
    (void)executor;
}


std::ostream& operator<<(std::ostream& os, const AForm& obj){
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "."; 
    return os;
}

AForm::~AForm(){
    std::cout << "AForm Destructor called!" << std::endl;
}

