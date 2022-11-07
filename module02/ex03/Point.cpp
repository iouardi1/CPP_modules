/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:38:15 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/07 19:24:51 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Point.hpp"

Point::Point(): x(0), y(0)
{
	std::cout << "Default constructor called\n" ;
}

Point::Point(const float _x, const float _y): x(Fixed(_x)), y(Fixed(_y))
{
	std::cout << "constructor overloaded called\n" ;
}

Point::Point(Point const &point): x(point.x), y(point.y)
{
	std::cout << "copy constructor called\n" ;
}

Point::~Point()
{
	std::cout << "Destructor called\n" ;
}

Point&   Point::operator=(const Point &point)
{
	(void)point;
	std::cout << "we can't assign a const variable\n";
	return *this;
}

const Fixed	Point::getX(void) const
{
	return (this->x);
}

const Fixed	Point::getY(void) const
{
	return (this->y);
}
