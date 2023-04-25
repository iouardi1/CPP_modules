/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:40:25 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/25 15:59:44 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(): oper(""), elements()
{

}

RPN::~RPN()
{
	
}

RPN::RPN(const RPN& copy)
{
	*this = copy;
}

RPN& RPN::operator=(const RPN& copy)
{
	oper = copy.oper;
	elements = copy.elements;
	return *this;
}

int RPN::tockenIsValid(char tocken)
{
	if (isdigit(tocken))
			return 1;
	else if (tocken == '-' || tocken == '+' || tocken == '/' || \
		tocken == '*')
			return 2;
	else if (tocken == ' ')
		return 3;
	return 0;
}

void	RPN::doMath(char tocken)
{
	int		tmp = elements.top();

	elements.pop();
	int		res;
	if (tocken == '+')
		res = elements.top() + tmp;
	else if (tocken == '-')
		res = elements.top() - tmp;
	else if (tocken == '*')
		res = elements.top() * tmp;
	else if (tocken == '/' && tmp != 0)
		res = elements.top() / tmp;
	else if (tocken == ' ')
		return ;
	else
	{
		std::cout << "Error" << std::endl;
		exit (-1);
	}
	elements.pop();
	elements.push(res);
}

void	RPN::parse_and_calculate(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (tockenIsValid(str[i]))
		{
			if (tockenIsValid(str[i]) == 1 && elements.size() < 2)
			{
				std::string tmp;
				tmp += str[i];
				this->elements.push(std::stoi(tmp));
			}
			else if (tockenIsValid(str[i]) == 2 && elements.size() == 2)
				doMath(str[i]);
			else if (tockenIsValid(str[i]) == 3)
			{
				i++;
				continue ;
			}
			else
			{
				std::cout << "Error" << std::endl;
				exit (-1);
			}
			i++;
		}
		else
		{
			std::cout << "Error" << std::endl;
			exit (-1);
		}
	}
	std::cout << elements.top() << std::endl;

	
	// std::string					tocken;
	// std::istringstream			stream(str);

	// while (std::getline(stream, tocken, ' '))
	// {
	// 	if (tockenIsValid(tocken))
	// 	{
	// 		if (tockenIsValid(tocken) == 1 && elements.size() < 2)
	// 			this->elements.push(std::stoi(tocken));
	// 		else if (tockenIsValid(tocken) == 2 && elements.size() == 2)
	// 			doMath(tocken);
	// 		else
	// 		{
	// 			std::cout << "Error" << std::endl;
	// 			exit (-1);
	// 		}
	// 	}
	// 	else
	// 	{
	// 		std::cout << "Error" << std::endl;
	// 		exit (-1);
	// 	}
	// }
	// std::cout << elements.top() << std::endl;
}
