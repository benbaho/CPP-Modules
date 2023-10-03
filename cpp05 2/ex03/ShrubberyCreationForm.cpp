/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:26:42 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/23 15:09:30 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : _target(target){ }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &tmp) : AForm(tmp) {
    this->_target = tmp._target;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    (void)executor;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}