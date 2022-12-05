/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 23:56:36 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/05 15:30:51 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try {
	
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Robotomy request", "Bender");
		rrf = someRandomIntern.makeForm("Presidenhvghfvtial pardon", "Bender");
		rrf = someRandomIntern.makeForm("Shrubbery creation", "Bender");
	}

	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}