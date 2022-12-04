/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:50:50 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/04 02:09:28 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequest", 0, 72, 45), target("RobotomyRequest")
{
	std::cout << "Default constructor for RobotomyRequestForm is called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor for RobotomyRequestForm is called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	*this = copy;
	std::cout << "Copy constrtuctor for RobotomyRequestForm is called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequest", 0, 72, 45), target(target)
{
	std::cout << "Constructor for RobotomyRequestForm is called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	target = copy.target;
	return *this;
}

static int halfCases = 0;

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > getGradeExec())
		throw GradeTooLowException();
	else if (getSign() == false)
		throw FormSignedException();
	else if (halfCases % 2)
		std::cout << "DRRRRRRRRRR!!! " << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "robotomy has been failed\n";
	halfCases++;
}