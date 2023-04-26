/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:45:07 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/26 18:52:44 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

btc::btc(): mapy(), fileName("")
{
	
}

btc::~btc()
{

}

btc::btc(btc const &copy)
{
	*this = copy;
}

btc	&btc::operator=(btc const &copy)
{
	this->mapy = copy.mapy;
	this->fileName = copy.fileName;
	return	*this;
}

btc::btc(std::string	fileName)
{
	this->fileName = fileName;
	std::fstream		myfile(this->fileName);

	try
	{
		if (!myfile.is_open())
		{
			std::cerr << "Error: file failed to open" << std::endl;
			exit (EXIT_FAILURE);
		}
		std::string	line;
		std::getline(myfile, line);
		line.erase(line.begin(), line.end());
		while (std::getline(myfile, line))
		{
			std::string		str(line.substr(0, 4) + line.substr(5, 2) + line.substr(8, 2));
			this->mapy.insert(std::make_pair(std::strtod(str.c_str(), NULL), std::strtod(line.substr(11).c_str(), NULL)));
			line.erase(line.begin(), line.end());
		}
		myfile.close();

	}
	catch(const std::exception	&e)
	{
		std::cout << e.what() << std::endl;
	}
}

size_t	btc::numTirre(std::string date)
{
	size_t	pos = 0;
	size_t	count = 0;
	while ((pos = date.find("-", pos + 1)) != std::string::npos)
		count++;
	return count;
}

void	btc::doMath(std::string	date, float	num)
{
	std::map<long, float>			mapyy(this->mapy);
	std::string						str(date.substr(0, 4) + date.substr(5, 2) + date.substr(8, 2));
	std::map<long, float>::iterator	it = mapyy.upper_bound(std::strtod(str.c_str(), NULL));
	if (it != mapyy.begin())
		--it;
	float	res = it->second * num;
	std::cout << date << " => " << num << " = "  << res << std::endl;
}

int	numDots(std::string num)
{
	size_t	pos = 0;
	size_t	count = 0;
	while ((pos = num.find(".", pos + 1)) != std::string::npos)
		count++;
	return count;
}

int numPipes(std::string date)
{
	size_t	pos = 0;
	size_t	count = 0;
	while ((pos = date.find("|", pos + 1)) != std::string::npos)
		count++;
	return count;
}

int	notvalid(std::string num)
{
	int	i = 0;
	while (num[i])
	{
		if (!isdigit(num[i]) && num[i] != '.' && num[i] != '-')
			return 1;
		i++;
	}
	return 0;
}

int commaExists(std::string date)
{
	std::string::iterator it;
	if ((it = find(date.begin() + 13, date.end(), ',')) != date.end())
		return	1;
	return 0;
}

void	convert_commas_to_dots(std::string &date)
{
    size_t pos = 0;
    while ((pos = date.find(',', pos + 1)) != std::string::npos)
        date.replace(pos, 1, ".");
}

void	btc::parseDate(std::string	date)
{
	if (date.length() > 13)
	{
		if (commaExists(date))
			convert_commas_to_dots(date);
		
		std::string		year = date.substr(0, 4);
		std::string		month = date.substr(5, 2);
		std::string		day = date.substr(8, 2);
		std::string		datee = date.substr(0, 10);
		std::string		num = date.substr(13);

		if (numPipes(date) != 1 || date.substr(10, 3) != " | ")
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if (std::atoi(year.c_str()) > 2022 || std::atoi(year.c_str()) < 2009)
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if	(std::atoi(month.c_str()) <= 0 || std::atoi(month.c_str()) > 12)
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if ((month == "02") && (std::atoi(day.c_str()) > 28 || std::atoi(day.c_str()) <= 0))
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if (std::atoi(day.c_str()) > 31 || std::atoi(day.c_str()) <= 0)
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if (notvalid(num) || (numDots(num) != 1 && numDots(num) != 0))
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if (std::strtod(num.c_str(), NULL) < 0)
			std::cerr << "Error: not a positive number." << std::endl;
		else if (std::strtod(num.c_str(), NULL) > 1000)
			std::cerr << "Error: too large number." << std::endl;
		else if (numTirre(date) != 2)
			std::cerr << "Error: bad input => " << datee << std::endl;
		else
			doMath(datee, std::strtod(num.c_str(), NULL));
	}
	else if (date.length() >= 10)
		std::cerr << "Error: bad input => " << date.substr(0, 10) << std::endl;
	else if (date.length() < 10 && date != "")
		std::cerr << "Error: bad input" << std::endl;
}

void	btc::parseFile(char *str)
{
	std::string		strr(str);
	std::fstream	myfile(strr);
	
	try
	{
		if (!myfile.is_open())
		{
			std::cerr << "Error file failed to open" << std::endl;
			exit(EXIT_FAILURE);
		}
		std::string line;
		int		flag = 0;
		while (std::getline(myfile, line, '\n'))
		{
			if (!flag && line == "date | value")
			{
				flag = 1;
				continue ;
			}
			parseDate(line);
			line.erase(line.begin(), line.end());
		}
		myfile.close();
			
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: bad input"  << std::endl;
	}
	
}