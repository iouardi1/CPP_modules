/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:03:36 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/21 15:05:34 by iouardi          ###   ########.fr       */
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

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called\n";
	this->i = n << j;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	this->i = int(roundf(n * (1 << j)));
}


Fixed	&Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called\n";
	i = fixed.i;
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

float Fixed::toFloat(void) const
{
	return ((float)(this->i) / (1 << j));
}

int	Fixed::toInt( void ) const
{
	return ((this->i) >> j);
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}
