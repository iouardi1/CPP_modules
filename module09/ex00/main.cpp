/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:42:25 by iouardi           #+#    #+#             */
/*   Updated: 2023/03/21 22:48:21 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	parse_line(std::string	line)
{
	while (line.empty())
	{
		std::string	date;

		if ((date = line.find_first_of("|") != std::string::npos))
		{
			if (date == line.find_last_not_of("|"))
			{
				
			}
			else
				return 0;
		}
		else
			return 0;
	}
}

// char**	split_line(std::string	line)
// {
	
// }

int	parse_first_line(std::string line)
{
	if (line != "date | value")
		return 0;
	return 1;
}

int	fill_mapy(std::map<std::string, float>& mapy, char* av)
{
	std::ifstream	myfile((std::string(av)));

	if (!myfile.is_open())
	{
		std::cerr << "Error file failed to open" << std::endl;
		exit(1);
	}

	std::string	line;

	std::getline(myfile, line);
	if (!parse_first_line(line))
		return 0;
	while (!myfile.eof() && line.empty() && parse_line(line))
	{
		std::getline(myfile, line);
		char	**str = split_line(line);

		float	flo = std::stof(str[1]);
		mapy.insert(std::make_pair(str[0], flo));
	}
	myfile.close();
	return (1);
}

int main(int argc, char** argv)
{
	if (argc == 2)
	{
		std::map<std::string, float> mapy;

		if (!fill_mapy(mapy, argv[1]))
		{
			std::cerr << "Error: Invalid argument" << std::endl;
			exit(EXIT_FAILURE);
		}
		
	}
	else
		std::cout << "Please enter one argument" << std::endl;
	return 0;
}