/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
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


class Form {

    private:
        const std::string   name;
        const int           reqGrade;
        const int           reqExec;
        bool                isSigned;
        

    public:

        Form();
        Form( std::string nick,  int grade,  int exec);
        Form operator=(const Form &tmp);
        ~Form();

        std::string getName() const;
        int getReqGrade() const;
        int getReqExec() const;
        bool getIsSigned() const;



        void beSigned(Bureaucrat &burea);
        void signForm(const Bureaucrat& burea);

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

        
    
};

std::ostream& operator<<(std::ostream& os, const Form& obj);