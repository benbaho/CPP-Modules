/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:59:35 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/14 22:59:35 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    private:
        std::string name;
        bool        sign;
        int         grade;
        int         sgrade; 

        

    public:
        Form();
        Form(std::string _name);
        Form(const Form &tmp);
        ~Form();

        Form operator=(const Form &form);
        void beSigned(Bureaucrat &burea);

        void setGrade(int _grade);
        void setName(std::string newname);
        void setSign(bool tmp);
        void setSgrade(int _sgrade);
        
        int getGrade() const;
        std::string getName() const;
        bool    getSign() const;
        int     getSgrade() const;
        
        void incrementGrade(int value);
        void decrementGrade(int value);

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() { return "too low";}

        };

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw(){ return "too high";}

        };


};



std::ostream& operator<<(std::ostream& os, const Form& obj);


#endif
