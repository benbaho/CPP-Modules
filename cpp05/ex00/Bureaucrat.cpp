/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:05:24 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/20 16:30:36 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << "Default constructor called." << std::endl;
}


void Bureaucrat::setGrade(int grade){
    this->grade = grade;
}

void Bureaucrat::setName(std::string name){
    this->name = name;
}


int Bureaucrat::getGrade() const{
    return this->grade;
}

std::string Bureaucrat::getName() const{
    return this->name;
}

void Bureaucrat::checkGrade(int grade) {
    try 
    {
        if (grade <= 150 && grade >= 1){
            std::cout << "Grade is enough to set." << std::endl;
            this->setGrade(grade);
        }
    }
    catch (int grade) {
        std::cout << "Grade is not enough to set." << std::endl;    
    }   
}


//check here later 
void Bureaucrat::operator<<(const Bureaucrat &tmp){
    std::cout << tmp.name << ", bureaucrat grade " << tmp.grade << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called." << std::endl;
}