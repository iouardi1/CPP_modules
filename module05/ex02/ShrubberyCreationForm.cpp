/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:05:42 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/04 00:10:24 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery", 0, 145, 137)
{
	std::cout << "Default constructor for ShrubberyCreationForm is called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default destructor for ShrubberyCreationForm is called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery", 0, 145, 137), target(target)
{
	std::cout << "Constructor for ShrubberyCreationForm is called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy)
{
	*this = copy;
	std::cout << "Copy constructor for ShrubberyCreationForm is called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & copy)
{
	target = copy.target;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() > getGradeSign())
		throw GradeTooLowException();
	else if (getSign() == false)
		throw FormSignedException();
	else
	{	
		std::ofstream myfile;
		myfile.open(target + "_shrubbery");
		for (int i = 0; i < 5; i++)
		{
			myfile <<
			"         A" << std::endl <<
			"        d$b" << std::endl <<
			"      .d$$$$b." << std::endl <<
			"    .d$i$$$$i$b." << std::endl <<
			"       d$$$b" << std::endl <<
			"      di$$$$ib" << std::endl <<
			"    .d$$$$$$$$b" << std::endl <<
			"  .d$$@$$$$$$$$ib." << std::endl <<
			"      d$$i$$b" << std::endl <<
			"     d$$$$$$$$b" << std::endl <<
			"  .d$@$$$$$$$$@$b." << std::endl <<
			".d$$$$i$$$$$$$$$$$b." << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
		std::endl;
		}
		myfile.close();
	}
		
}
