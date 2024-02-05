/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 17:50:33 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 17:22:15 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

    private:
        const std::string name;
        int         grade;
        
    public:
        Bureaucrat();
        Bureaucrat(std::string nick);
        Bureaucrat operator=(const Bureaucrat &tmp);
        ~Bureaucrat();

        std::string getName() const;

        int getGrade() const;
        void setGrade(int newgrade);

        void executeForm(AForm const & form);
        void signForm(AForm &AForm);
        void incrementGrade(int number);
        void decrementGrade(int number);


        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw(){
                    return ("Grade is too high!");
                };
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() {
                    return ("Grade is too low!");
                }
        };


};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);