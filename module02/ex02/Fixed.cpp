/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:53:45 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/18 20:37:43 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::j = 8;

Fixed::Fixed(): i(0)
{
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed::Fixed(int const n)
{
	// std::cout << "Int constructor called\n";
	this->i = n << j;
}

Fixed::Fixed(const float n)
{
	// std::cout << "Float constructor called\n";
	this->i = int(roundf(n * (1 << j)));
}

Fixed	&Fixed::operator= (const Fixed &fixed)
{
	// std::cout << "Copy assignment operator called\n";
	i = fixed.i;
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}
 
int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
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
	return ((this->i) * (1 >> j));
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool	Fixed::operator== (const Fixed &fixed) const
{
	return (this->i == fixed.i);
}

bool	Fixed::operator>= (const Fixed &fixed) const
{
	return (this->i >= fixed.i);
}

bool	Fixed::operator<= (const Fixed &fixed) const
{
	return (this->i <= fixed.i);
}

bool	Fixed::operator> (const Fixed &fixed) const
{
	return (this->i > fixed.i);
}

bool	Fixed::operator< (const Fixed &fixed) const
{
	return (this->i < fixed.i);
}

bool    Fixed::operator!= (const Fixed &fixed) const
{
	return (this->i != fixed.i);
}

Fixed    Fixed::operator+ (const Fixed &fixed) const
{
	Fixed	res;

	res.setRawBits(this->i + fixed.i);
	return (res);
}

Fixed    Fixed::operator- (const Fixed &fixed) const
{
	Fixed	res;

	res.setRawBits(this->i - fixed.i);
	return (res);
}

Fixed    Fixed::operator* (const Fixed &fixed) const
{
	Fixed	res;

	res.setRawBits((long long)(this->i * fixed.i) >> j);
	return (res);
}

Fixed    Fixed::operator/ (const Fixed &fixed) const
{
	Fixed	res;

	res.setRawBits((long long)(this->i * (1 << j)) / fixed.i);
	return (res);
}

Fixed Fixed::operator++ ()
{
	(this->i)++;
	return (*this);
}

Fixed Fixed::operator++ (int)
{
	Fixed	res = (*this);
	(this->i)++;
	return (res);
}

Fixed Fixed::operator-- ()
{
    (this->i)--;
	return(*this);
}

Fixed Fixed::operator-- (int)
{
    Fixed    res = *this;
	(this->i)--;
	return (res);
}

Fixed&	Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.i < fixed2.i)
		return	(fixed1);
	return (fixed2);
}

const Fixed&	Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1.i < fixed2.i)
		return	(fixed1);
	return (fixed2);
}

Fixed&	Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.i > fixed2.i)
		return	(fixed1);
	return (fixed2);
}

const Fixed&	Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1.i > fixed2.i)
		return	(fixed1);
	return (fixed2);
}
