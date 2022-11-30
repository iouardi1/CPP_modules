/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:03:43 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 23:20:40 by iouardi          ###   ########.fr       */
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

Dog::Dog(const Dog &copy): brain(NULL)
{
    std::cout << "Copy constructor of Dog is called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Copy assignment operator of Dog is called" << std::endl;
    if (brain)
        delete brain;
    this->type = copy.type;
    brain = new Brain(*(copy.brain));
    return *this;
}

void	Dog::makeSound() const
{
    std::cout << "Dogs bark" << std::endl;
}

Brain*   Dog::getBrain() const
{
    return this->brain;
}
