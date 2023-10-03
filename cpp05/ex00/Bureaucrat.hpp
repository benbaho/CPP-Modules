/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:05:21 by bdurmus           #+#    #+#             */
/*   Updated: 2023/08/20 16:29:24 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

    private:
        const std::string name;
        int grade;
    
    public:
        Bureaucrat();
        ~Bureaucrat();


        void setName(std::string name);
        void setGrade(int grade);

        void checkGrade(int grade);
        int getGrade() const;
        std::string getName() const;
        
        void operator<<(const Bureaucrat &tmp);


};




#endif
