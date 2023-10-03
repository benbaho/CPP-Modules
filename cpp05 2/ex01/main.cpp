/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:30:10 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/14 22:30:10 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Form.hpp"

int main (){
    
    Bureaucrat first;
    Bureaucrat second;
    Form        test;

    second.setName("test");
    first.setName("baho");
    test.setName("test2");

    
   try {
        first.setGrade(78);
        first.decrementGrade(12);
        second.setGrade(12);
        second.signForm(test);
        second = first;
    }
    catch (const Bureaucrat::GradeTooHighException &e){
        std::cout << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException &e) {   
        std::cout << e.what() << std::endl;
    }
    
    
    std::cout << second << std::endl;

}