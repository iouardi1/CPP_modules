/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:40:25 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/25 20:21:34 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(): oper(), elements()
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

void	RPN::doMath()
{
	int  i = 0;
	
	while (elements.size() >= 2 && oper.size() >= 1)
	{
		int		tmp = elements.top();
		char	tocken = oper.top();
	
		elements.pop();
		oper.pop();
		int		res;
		if (tocken == '+')
			res = tmp + elements.top();
		else if (tocken == '-')
			res = tmp - elements.top();
		else if (tocken == '*')
			res = tmp * elements.top();
		else if (tocken == '/' && elements.top() != 0)
			res = tmp / elements.top();
		elements.pop();
		elements.push(res);
	}
	std::cout << elements.top() << std::endl;
}

void	RPN::parse_and_calculate(std::string str)
{
	int i = 1;

	while (str.length() - i >= 0)
	{
		if (tockenIsValid(str[str.length() - i]))
		{
			if (tockenIsValid(str[str.length() - i]) == 1)
			{
				std::string tmp;
				tmp += str[str.length() - i];
				this->elements.push(std::stoi(tmp));
			}
			else if (tockenIsValid(str[str.length() - i]) == 2)
				this->oper.push(str[str.length() - i]);
			else if (tockenIsValid(str[str.length() - i]) == 3)
			{
				i++;
				continue ;
			}
			else
			{
				std::cout << "Error" << std::endl;
				exit (-1);
			}
			if (i == str.length())
				break ;
			i++;
		}
		else
		{
			std::cout << "Error" << std::endl;
			exit (-1);
		}
	}
	if (oper.size() + 1 == elements.size())
		doMath();
	else
	{
		std::cout << "Error" << std::endl;
		exit (-1);
	}
}
