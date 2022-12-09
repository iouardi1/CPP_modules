/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:07:48 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/09 13:20:57 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion()
{
	std::cout << "Default constructor of Conversion is called" << std::endl;
}

Conversion::~Conversion()
{
	std::cout << "Destructor of Conversion is called" << std::endl;
}

Conversion::Conversion(const Conversion& copy)
{
	*this = copy;
	std::cout << "Copy assignement operator of Conversion is called" << std::endl;
}

Conversion& Conversion::operator=(const Conversion& copy)
{
	(void)copy;
	std::cout << "Assignment operator of Conversion is called" << std::endl;
	return *this;
}

const	char * Conversion::Errorexception::what() const throw()
{
	return ("This conversion is not possible");
}

// void Conversion::toInt() const
// {
// 	int		i;

// 	if (str.find_first_not_of("0123456789") != std::string::npos)
// 		throw Errorexception();
// 	else
// 	{
// 		i = static_cast<int>(std::atoi(str.c_str()));
// 		std::cout << "int: " << i << std::endl;
// 	}
// }

// void Conversion::toDouble() const
// {
// 	double		i;

// 	if (str.find_first_not_of("0123456789") != std::string::npos)
// 		throw Errorexception();
// 	else
// 	{
// 		i = static_cast<double>(std::stod(str.c_str()));
// 		std::cout << "double: " << i << std::endl;
// 	}
// }

// void	Conversion::toFloat() const
// {
// 	float	i;
	
// 	if (str.find_first_not_of("0123456789.f") != std::string::npos)
// 		throw Errorexception();
// 	else
// 	{
// 		i = static_cast<float>(std::stof(str.c_str()));
// 		std::cout << "float: " << i << std::endl;
// 	}
// }

// //setter
// void 	Conversion::setStr(std::string arg)
// {
// 	str = arg;
// }

void	Conversion::parseArg()
{
	if (!str.empty())
		return ;
	else if (str.find_first_not_of("0123456789+-") == std::string::npos)
	{
		isInt = false;
		if (str.find_first_not_of("0123456789+-.") == std::string::npos)
		{
			isDouble = false;
			if (str.find_first_not_of("0123456789+-.f") == std::string::npos)
			{
				isFloat = false;
				if (str)
			}
			
		// return ;
	}
	else if (str.length() == 1 && (str == "+" || str == "-"))
	{
		isChar = true;
		return ;
	}
	else if ((str[0] == '+' || str[0] == '-') && str.length() > 1)
	{
		if ((std::atoi(str.c_str()) > INT_MAX || (std::atoi(str.c_str()) < INT_MIN)))
		{
			isInt = false;
			if ((std::stof(str.c_str())) > 3.40282e+38 || (std::stof(str.c_str())) < -3.40282e+38)
			{
				isFloat = false;
				if ((std::stod(str.c_str())) > 1.79769e+308 || (std::stod(str.c_str())) < -1.79769e+308)
				{
					isDouble = false;
					return ;
				}
				else
				{
					isDouble = true;
					return ;
				}
			}
			else
			{
				isFloat = true;
				isDouble = true;
				return ;
			}
		}
		else
		{
			isInt = true;
			isFloat = true;
			isDouble = true;
			return ;
		}
	}
		
}