/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:28:51 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/03 19:08:13 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class Intern {

    public:
        Intern();
        Intern (const Intern &tmp);
        Intern operator=(const Intern &tmp);
        ~Intern();
        
        AForm *RobotomyRequest(std::string _target);
        AForm *ShrubberyCreation(std::string _target);
        AForm *PresidentialPardon(std::string _target);
        AForm *makeForm(std::string name, std::string target);

};