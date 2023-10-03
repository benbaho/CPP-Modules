/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:26:57 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/23 14:48:12 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERYCREATIONFORM_HPP
#define SHRUBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{

    private:
        std::string _target;
    
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &tmp);
        ShrubberyCreationForm(const std::string &target);
        ~ShrubberyCreationForm();
        
        void execute(Bureaucrat const & executor) const;
};

#endif