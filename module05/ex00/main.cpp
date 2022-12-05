/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 23:56:36 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/05 14:06:54 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat khtek("smito", 0);
		std::cout << khtek;
		khtek.decrementGrade();
		khtek.incrementGrade();
		std::cout << khtek;
	}
	
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}