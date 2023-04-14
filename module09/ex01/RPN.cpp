/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:40:25 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/14 05:26:45 by iouardi          ###   ########.fr       */
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

int RPN::tockenIsValid(std::string tocken)
{
	if (tocken.length() == 1)
	{
		if (isdigit(tocken[0]) && std::stoi(tocken) < 10 && std::stoi(tocken) >= 0)
				return 1;
		else if (tocken[0] == '-' || tocken[0] == '+' || tocken[0] == '/' || \
			tocken[0] == '*')
				return 2;
	}
	return 0;
}

void	RPN::doMath(std::string tocken)
{
	int		tmp = elements.top();

	elements.pop();
	int		res;
	if (tocken[0] == '+')
		res = elements.top() + tmp;
	else if (tocken[0] == '-')
		res = elements.top() - tmp;
	else if (tocken[0] == '*')
		res = elements.top() * tmp;
	else if (tocken[0] == '/' && tmp != 0)
		res = elements.top() / tmp;
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
	std::string					tocken;
	std::istringstream			stream(str);

	while (std::getline(stream, tocken, ' '))
	{
		if (tockenIsValid(tocken))
		{
			if (tockenIsValid(tocken) == 1 && elements.size() < 2)
				this->elements.push(std::stoi(tocken));
			else if (tockenIsValid(tocken) == 2 && elements.size() == 2)
				doMath(tocken);
			else
			{
				std::cout << "Error" << std::endl;
				exit (-1);
			}
		}
		else
		{
			std::cout << "Error" << std::endl;
			exit (-1);
		}
	}
	std::cout << elements.top() << std::endl;
}
