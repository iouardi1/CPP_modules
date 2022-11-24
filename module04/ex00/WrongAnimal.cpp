/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:01:16 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 19:09:01 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor of WrongAnimal is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy constructor of WrongAnimal is called" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal is called" << std::endl;
}

WrongAnimal& 	WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "Copy assignement operator of WrongAnimal is called" << std::endl;
	type = copy.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "random but wrong : whooowhooowhoooo" << std::endl;
}
