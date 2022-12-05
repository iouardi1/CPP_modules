/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:55:21 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 09:45:32 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor of Brain is called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain is called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy constructor of Brain is called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Assignment operator of Brain is called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return *this;
}
