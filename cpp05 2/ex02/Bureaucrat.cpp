/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:51:35 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/11 22:51:35 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("undefined"), grade(0){ 
    std::cout << "Bureaucrat Default constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name){
    std::cout << "Bureaucrat Name constructor called!" << std::endl;
    this->setName(name);
}

Bureaucrat::Bureaucrat(std::string name, int _grade){
    std::cout << "Bureaucrat Name constructor called!" << std::endl;
    this->setName(name);
    this->setGrade(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &tmp){
    std::cout << "Bureaucrat Copy constructor called!" << std::endl;
    setName(tmp.getName());
}

Bureaucrat Bureaucrat::operator=(const Bureaucrat &burea){
    std::cout << "Bureaucrat Copy assigment constructor called!" << std::endl;
    if (this != &burea){
        this->name = burea.getName();
        this->grade = burea.getGrade();
    }
    return *this;   
}

void Bureaucrat::signForm(AForm &myform){
    try {
        myform.beSigned(*this);
        std::cout << this->getName() << " signed " << myform.getName() << std::endl;
    }
    catch (AForm::GradeTooLowException &e){
        std::cout << this->getName() <<  " couldn't sign " << myform.getName() << " because " << e.what() << std::endl;   
    }
}


int Bureaucrat::getGrade() const{
    return this->grade;
}

std::string Bureaucrat::getName() const{
    return this->name;
}

void Bureaucrat::setName(std::string newname){
    this->name = newname;
}


void Bureaucrat::incrementGrade(int value) 
{
    if ((this->grade - value) < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade -= value;
}

void Bureaucrat::decrementGrade(int value) 
{
    if ((this->grade + value) > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade += value;
}

void Bureaucrat::setGrade(int _grade){   
    if (_grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooHighException();
    else
    this->grade = _grade;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat  Destructor called!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj){
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "."; 
    return os;
}