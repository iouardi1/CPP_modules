/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:14:18 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/01 20:45:26 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void    Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void    Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void    Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::notFound()
{
	std::cout << "invalid input\n";
}

void    Harl::complain(std::string level)
{
	void (Harl::* ptr[5]) (void);
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;

	ptr[0] = &Harl::debug;
	ptr[1] = &Harl::info;
	ptr[2] = &Harl::warning;
	ptr[3] = &Harl::error;
	ptr[4] = &Harl::notFound;
	
	while (level != str[i] && i < 4)
		i++;
	switch (i)
	{
		case 0:
		{
			std::cout << "[ DEBUG ]\n";
			(this->*ptr[0])();
		}
		case 1:
		{
			std::cout << "[ INFO ]\n";
			(this->*ptr[1])();
		}
		case 2:
		{
			std::cout << "[ WARNING ]\n";
			(this->*ptr[2])();
		}
		case 3:
		{
			std::cout << "[ ERROR ]\n";
			(this->*ptr[3])();
			break ;
		}
		default:
		{
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
		}
	}
}
