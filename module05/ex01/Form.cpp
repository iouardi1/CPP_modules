/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:03:14 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/03 14:38:25 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("Default"), sign(0), gradeSign(150), gradeExec(150)
{
	std::cout << "Default constructor for Form is called\n";
}

Form::~Form()
{
	std::cout << "Destructor for Form is called\n";
}

Form::Form(const Form& copy): name(copy.name), sign(copy.sign), gradeSign(copy.gradeSign), gradeExec(copy.gradeExec)
{
	*this = copy;
	std::cout << "Copy constructor for Form is called\n";
}

Form::Form(const std::string name, bool sign, const int gradeSign, const int gradeExec): name(name), sign(sign),  gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	if (gradeSign < 0 || gradeExec < 0)
		throw GradeTooHighException();
	std::cout << "Constructor for Form is called" << std::endl;
}

Form& Form::operator=(const Form& copy)
{
	this->sign = copy.sign;
	std::cout << "Assignment operator for Form is called\n";
	return *this;
}

const	std::string Form::getName() const
{
	return (name);
}

bool Form::getSign() const
{
	return (sign);
} 

const int&	Form::getGradeExec() const
{
	return (gradeExec);
}

const int&	Form::getGradeSign() const
{
	return (gradeSign);
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

void	Form::beSigned(Bureaucrat const & copy)
{
	if(copy.getGrade() <= gradeSign)
		this->sign = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, const Form& form)
{
	if (form.getSign())
		o << form.getName() << ": is signed!, and has : " << form.getGradeSign() << " grade for sign, and " << form.getGradeExec() << " execution grade\n";
	else 
		o << form.getName() << ": is not signed!, and has : " << form.getGradeSign() << ", and " << form.getGradeExec() << " execution grade\n";
	return o;
}