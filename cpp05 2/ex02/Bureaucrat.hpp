/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:16:18 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/11 22:16:18 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

    private:
        std::string name;
        int         grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name);
        Bureaucrat(std::string name, int _grade);
        Bureaucrat(const Bureaucrat &tmp); // kontro et
        ~Bureaucrat();


        Bureaucrat operator=(const Bureaucrat &burea); 
        void signForm(AForm &myform);
        
        void setGrade(int _grade);
        void setName(std::string newname);
        
        int getGrade() const;
        std::string getName() const;
        
        void incrementGrade(int value);
        void decrementGrade(int value);
        
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() { return "Bureaucrat-> The grade is too high.";}

        };

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw(){ return "Bureaucrat-> The grade is too high.";}

        };


};
        
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);


#endif