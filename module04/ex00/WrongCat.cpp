/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:08:15 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 19:06:48 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default constructor of WrongCat is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy constructor of WrongCat is called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat is called" << std::endl;
}

WrongCat& 	WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "Copy assignement operator of WrongCat is called" << std::endl;
    type = copy.type;
    return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "not meow meow\n";
}
