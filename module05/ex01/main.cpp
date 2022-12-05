/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 23:56:36 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/05 14:18:19 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat khtek("smito", 150);
		Form khtek_lukhra("smithaa", 0, 150, 1);
		std::cout << khtek;
		std::cout << khtek_lukhra;
		khtek_lukhra.beSigned(khtek);
		std::cout << khtek_lukhra;
		khtek.signForm(khtek_lukhra);
	}

	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}