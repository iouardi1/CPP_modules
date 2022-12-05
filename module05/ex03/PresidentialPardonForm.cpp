/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:39:38 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/04 02:09:14 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardon", 0, 25, 5), target("PresidentialPardon")
{
	std::cout << "Default constructor of PresidentialPardonForm is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardon", 0, 25, 5), target(target)
{
	std::cout << "Constructor of PresidentialPardonForm is called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor of PresidentialPardonForm is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	*this = copy;
	std::cout << "Copy constructor of PresidentialPardonForm is called\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	target = copy.target;
	return *this;
	std::cout << "Assignement operator of PresidentialPardonForm is called\n";
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > getGradeExec())
		throw GradeTooLowException();
	else if (getSign() == false)
		throw FormSignedException();
	else
		std::cout << target << " has been pardoned by y Zaphod Beeblebrox.\n";
}