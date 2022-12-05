/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:36:36 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/05 15:20:27 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Default constructor of Intern is called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Destructor for Intern is called\n";
}

Intern::Intern(const Intern& copy)
{
	*this = copy;
	std::cout << "Copy constructor of Intern is called" << std::endl;
}

Intern& Intern::operator=(const Intern& copy)
{
	(void)copy;
	std::cout << "Assignement operator of Intern is called\n";
	return *this;
}

 Form* PardonForm(const std::string target)
{
	return	(new PresidentialPardonForm(target));
}

 Form* RequestForm(const std::string target)
{
	return	(new RobotomyRequestForm(target));
}

 Form* CreationForm(const std::string target)
{
	return	(new ShrubberyCreationForm(target));
}

Form* Intern::makeForm(const std::string name, const std::string target)
{
	Form* (*forms[])(const std::string target) = {&PardonForm, &RequestForm, &CreationForm};
	std::string availableForms[] = {"Presidential pardon", "Robotomy request", "Shrubbery creation"};
	
	int i;
	for (i = 0; i < 3; i++)
	{
		if (name == availableForms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (forms[i](target));
		}
	}
	throw UnavailableForm();
	return NULL;
}

const char* Intern::UnavailableForm::what() const throw()
{
	return ("Unavailable form");
}
