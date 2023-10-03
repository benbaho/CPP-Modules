/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:59:32 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/14 22:59:32 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("undefined"), sign(false), grade(0), sgrade(0) { 
    std::cout << "Default constructor called!" << std::endl;
}

Form::Form(std::string _name) : name(_name){
    std::cout << "Name constructor called!" << std::endl;
}

Form::Form(const Form &tmp){
    std::cout << "Copy constructor called!" << std::endl;
    name = tmp.getName();
    grade = tmp.getGrade();
    sign = tmp.getSign();
    sgrade = tmp.getSgrade();
}

Form Form::operator=(const Form &form){
    std::cout << "Copy assigment constructor called!" << std::endl;
    if (this != &form){
        name = form.getName();
        grade = form.getGrade();
        sign = form.getSign();
        sgrade = form.getSgrade();
    }
    return *this;
}

void Form::setName(std::string newname){
    this->name = newname;
}

void Form::setGrade(int _grade){
    this->grade = _grade;
}

void Form::setSign(bool tmp){
    this->sign = tmp;
}

void Form::setSgrade(int _sgrade){
    this->sgrade = _sgrade;
}

int Form::getGrade() const{
    return this->grade;
}

std::string Form::getName() const {
    return this->name;
}

bool Form::getSign() const{
    return this->sign;
}

int Form::getSgrade() const{
    return this->sgrade;
}

void Form::incrementGrade(int value) 
{
    if ((this->grade - value) < 1)
        throw Form::GradeTooHighException();
    this->grade -= value;
}

void Form::decrementGrade(int value) 
{
    if ((this->grade + value) > 150)
        throw Form::GradeTooLowException();
    this->grade += value;
}

void Form::beSigned(Bureaucrat &burea){
    if (sgrade <= burea.getGrade())
        setSign(true);
    else
        throw Form::GradeTooLowException();
}



std::ostream& operator<<(std::ostream& os, const Form& obj){
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "."; 
    return os;
}

Form::~Form(){
    std::cout << "Destructor called!" << std::endl;
}

