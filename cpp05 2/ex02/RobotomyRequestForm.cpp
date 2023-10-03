/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:29:25 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/22 00:28:58 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &tmp) : AForm(tmp) {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    (void)executor;
    
}

RobotomyRequestForm::~RobotomyRequestForm(){}
