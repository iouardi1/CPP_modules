/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:07:48 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/06 22:33:27 by iouardi          ###   ########.fr       */
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

void Conversion::toInt() const
{
	int		i;

	if (str.find_first_not_of("0123456789") != std::string::npos)
		throw Errorexception();
	else
	{
		i = static_cast<int>(std::atoi(str.c_str()));
		std::cout << "int: " << i << std::endl;
	}
}

void Conversion::toDouble() const
{
	double		i;

	if (str.find_first_not_of("0123456789") != std::string::npos)
		throw Errorexception();
	else
	{
		i = static_cast<double>(std::stod(str.c_str()));
		std::cout << "double: " << i << std::endl;
	}
}

void	Conversion::toFloat() const
{
	float	i;
	
	if (str.find_first_not_of("0123456789.f") != std::string::npos)
		throw Errorexception();
	else
	{
		i = static_cast<float>(std::stof(str.c_str()));
		std::cout << "float: " << i << std::endl;
	}
}

//setter
void 	Conversion::setStr(std::string arg)
{
	str = arg;
}