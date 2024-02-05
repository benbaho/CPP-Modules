/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:55:07 by bdurmus           #+#    #+#             */
/*   Updated: 2023/12/27 22:50:46 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {

    private:
        const std::string   name;
        const int           reqGrade;
        const int           reqExec;
        bool                isSigned;
        

    public:

        AForm();
        AForm( std::string nick,  int grade,  int exec);
        AForm &operator=(const AForm &tmp);
        virtual ~AForm();

        std::string getName() const;
        int getReqGrade() const;
        int getReqExec() const;
        bool getIsSigned() const;



        void beSigned(const Bureaucrat &burea);
        virtual void execute(Bureaucrat const &executor) const = 0;
        

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw(){
                    return ("Grade is too high!");}
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() {
                    return ("Grade is too low!");}
        };
        class IsNotSignedException : public std::exception
        {   
            public:
                const char* what() const throw() {
                    return ("This is not signed!");}
        };

        
    
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);