/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:44:29 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/25 13:26:19 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor of Cat is called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat is called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &copy): brain(NULL)
{
	std::cout << "Copy constructor of Cat is called" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Copy assignment operator of Cat is called" << std::endl;
	if (brain)
		delete brain;
	this->type = copy.type;
	brain = new Brain(*(copy.brain));
	return *this;
}

void	Cat::makeSound() const
{
    std::cout << "Cats meow meow" << std::endl;
}

Brain*   Cat::getBrain() const
{
    return this->brain;
}
