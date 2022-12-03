/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 23:56:36 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/03 23:42:07 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try {
		Bureaucrat khtek("smito", 150);
		ShrubberyCreationForm khtek_lukhra("taaarget");
		// std::cout << khtek_lukhra;
		// khtek_lukhra.beSigned(khtek);
		khtek_lukhra.execute(khtek);
	}

	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}