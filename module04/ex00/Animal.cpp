/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:22:25 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 19:10:02 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Default")
{
    std::cout << "Default constructor of Animal is called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor of Animal is called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Copy constructor of Animal is called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Copy assignment operator of Animal is called" << std::endl;
    this->type = copy.type;
    return *this;
}

std::string Animal::getType() const
{
    return (type);
}

void    Animal::makeSound() const
{
    std::cout << "random animal sound : baaaaaaaaaa3" << std::endl;
}
