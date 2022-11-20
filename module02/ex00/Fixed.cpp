/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2022/11/18 12:19:25 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::j = 8;

Fixed::Fixed(): i(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed	&Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called\n";
	i = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
 
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (i);
}

void	 Fixed::setRawBits(int const raw)
{
	i = raw;
}
