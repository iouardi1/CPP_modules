/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:45:07 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/25 17:56:35 by iouardi          ###   ########.fr       */
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
			this->mapy.insert(std::make_pair(std::stol(str), std::stof(line.substr(11))));
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
	std::string		str(date.substr(0, 4) + date.substr(5, 2) + date.substr(8, 2));
	std::map<long, float>::iterator	it = mapyy.upper_bound(std::stol(str));
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
		if (!isdigit(num[i]) && num[i] != '.')
			return 1;
		i++;
	}
	return 0;
}

void	btc::parseDate(std::string	date)
{
	if (date.length() > 13)
	{
		std::string		year = date.substr(0, 4);
		std::string		month = date.substr(5, 2);
		std::string		day = date.substr(8, 2);
		std::string		datee = date.substr(0, 10);
		std::string		num = date.substr(13);

		if (numPipes(date) != 1 || date.substr(10, 3) != " | ")
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if (std::stoi(year) > 2022 || std::stoi(year) < 2009)
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if	(std::stoi(month) <= 0 || std::stoi(month) > 12)
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if ((month == "02") && (std::stoi(day) > 28 || std::stoi(day) <= 0))
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if (std::stoi(day) > 31 || std::stoi(day) <= 0)
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if (notvalid(num) || (numDots(num) != 1 && numDots(num) != 0))
			std::cerr << "Error: bad input => " << datee << std::endl;
		else if (std::stof(num) < 0)
			std::cerr << "Error: not a positive number." << std::endl;
		else if (std::stof(num) > 1000)
			std::cerr << "Error: too large number." << std::endl;
		else if (numTirre(date) != 2)
			std::cerr << "Error: bad input => " << datee << std::endl;
		else
			doMath(datee, std::stof(num));
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
		// std::cerr << e.what() << '\n';
		std::cout << "Error: bad input"  << std::endl;
	}
	
}