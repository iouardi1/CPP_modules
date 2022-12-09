/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:07:48 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/09 18:45:02 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() : isChar(false), isInt(false), isFloat(false), isDouble(false)
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

	if (this->isInt)
	{
		i = static_cast<int>(std::atoi(str.c_str()));
		std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int: impossible\n";
}

void Conversion::toDouble() const
{
	double		i;

	if (this->isDouble)
	{
		i = static_cast<double>(std::stod(str.c_str()));
		std::cout << "double: " << i << std::endl;
	}
	else if (str == "nan")
		std::cout << "double: nan\n";
	else if (str == "-inf")
		std::cout << "double: -inf\n";
	else if (str == "+inf")
		std::cout << "double: +inf\n";
	else
		std::cout << "double: impossible\n";
}

void	Conversion::toFloat() const
{
	float	i;
	
	if (this->isFloat)
	{
		i = static_cast<float>(std::stof(str.c_str()));
		std::cout << "float: " << i << std::endl;
	}
	else if (str == "nan" || str == "nanf")
		std::cout << "float: nanf\n";
	else if (str == "-inf" || str == "-inff")
		std::cout << "float: -inff\n";
	else if (str == "+inf" || str == "+inff")
		std::cout << "float: +inff\n";
	else
		std::cout << "float: impossible\n";
}

void	Conversion::toChar() const
{
	const char *charr;

	if (isChar && str != "nan" && str != "-inf" && str != "+inf" && str != "nanf" && str != "-inff" && str != "+inff")
	{
		charr = static_cast<const char *>(str.c_str());
		std::cout << "char:" << charr << std::endl;
	}
	else
		std::cout << "char: impossible\n";
}

//setter
void 	Conversion::setStr(std::string arg)
{
	str = arg;
}

int	is_print(std::string str)
{
	for (int i = 0; i < static_cast<int>(str.length()); i++)
	{
		if (str[i] < 33 || str[i] > 126)
			return 0;
	}
	return 1;
}

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
				if (is_print(str))
				{
					isChar = true;
					return ;
				}
				else
					isChar = false;
			}
			else
			{
				if (str[str.length() - 1] == 'f' && str.find_first_of("f") == str.find_last_of("f") && \
				str.find_first_of(".") == str.find_last_of(".") && isdigit(str[str.find_first_of(".") + 1]))
					isFloat = true;
					isDouble = true;
			}
		}
		else if (str.find_first_of(".") == str.find_last_of(".") && isdigit(str[str.find_first_of(".") + 1]))
		{
			isDouble = true;
			return ;
		}	
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