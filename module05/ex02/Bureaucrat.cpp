/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 22:41:22 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/03 21:52:57 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): name("Bureaucrat"), grade(150)
{
	std::cout << "Default constructor of Bureaucrat is called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): name(name), grade(grade)
{
	std::cout << "Constructor of Bureaucrat is called\n";
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << "copy constructor for Bureaucrat is called\n";
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "default destructor for Bureaucrat is called\n";
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& copy)
{
	Bureaucrat(copy.name, copy.grade);
	std::cout << "copy assignment operator for Bureaucrat is called\n";
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void	Bureaucrat::incrementGrade()
{
	if (grade < 2)
		throw GradeTooHighException();
	else if (grade > 151)
		throw GradeTooHighException();
	else
		grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if (grade < 0)
		throw GradeTooHighException();
	else if (grade > 149)
		throw GradeTooHighException();
	else
		grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureau)
{
	o << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << ".\n";
	return o;
}

void	Bureaucrat::signForm(const Form &form)
{
	if (form.getSign())
		std::cout << name << " signed " << form.getName() << std::endl;
	else
	{
		std::cout << name << " couldn't sign " << form.getName() << " because ";
		throw GradeTooLowException();
	}
}