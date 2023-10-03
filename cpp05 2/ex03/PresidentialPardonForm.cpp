/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:29:54 by bdurmus           #+#    #+#             */
/*   Updated: 2023/09/22 00:28:48 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &tmp) : AForm(tmp){}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    (void)executor;
}
PresidentialPardonForm::~PresidentialPardonForm(){};