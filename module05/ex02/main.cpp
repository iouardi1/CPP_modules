/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 23:56:36 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/04 02:13:55 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try {
		Bureaucrat khtek("smito", 5);
		Bureaucrat khtek1("smitooo", 45);
		ShrubberyCreationForm khtek2("targeeet");
		PresidentialPardonForm khtek3;
		RobotomyRequestForm khtek4;
		
		khtek3.beSigned(khtek);
		khtek3.execute(khtek);
		// khtek1.executeForm(khtek4);
		khtek2.beSigned(khtek1);
		khtek1.executeForm(khtek2);
	}

	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}