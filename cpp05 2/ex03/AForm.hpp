/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:59:35 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/14 22:59:35 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

    private:
        std::string name;
        bool        sign;
        int         grade;
        int         sgrade; 

    public:
        AForm();
        AForm(std::string _name);
        AForm(const AForm &tmp);
        virtual ~AForm();

        AForm &operator=(const AForm &form);
        void beSigned(Bureaucrat &burea);

        void setGrade(int _grade);
        void setName(std::string newname);
        void setSign(bool tmp);
        void setSgrade(int _sgrade);
        
        int         getGrade() const;
        std::string getName() const;
        bool        getSign() const;
        int         getSgrade() const;
        
        void incrementGrade(int value);
        void decrementGrade(int value);

        virtual void execute(Bureaucrat const & executor) const = 0;
        
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() { return "AForm-> The grade is too low.";}

        };

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw(){ return "AForm-> The grade is too high.";}

        };


};



std::ostream& operator<<(std::ostream& os, const AForm& obj);


#endif
