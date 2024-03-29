/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:44:29 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/22 14:24:15 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor of Cat is called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat is called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor of Cat is called" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Copy assignment operator of Cat is called" << std::endl;
	this->type = copy.type;
	return *this;
}

void	Cat::makeSound() const
{
    std::cout << "Cats meow meow" << std::endl;
}
