/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:03:43 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 11:28:31 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor of Dog is called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog is called" << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Copy constructor of Dog is called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Copy assignment operator of Dog is called" << std::endl;
    this->type = copy.type;
    this->brain = copy.brain;
    return *this;
}

void	Dog::makeSound() const
{
    std::cout << "Dogs bark" << std::endl;
}
