/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:07:48 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/06 11:56:35 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion()
{
	std::cout << "Default constructor of Conversion is called" << std::endl;
}

Conversion::~Conversion()
{
	std::cout << "Destructor of Conversion is called" << std::endl;
}

Conversion::Conversion(const Conversion& copy)
{
	*this = copy;
	std::cout << "Copy assignement operator of Conversion is called" << std::endl;
}

Conversion& Conversion::operator=(const Conversion& copy)
{
	(void)copy;
	std::cout << "Assignment operator of Conversion is called" << std::endl;
	return *this;
}
