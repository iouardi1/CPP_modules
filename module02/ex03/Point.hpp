/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:28:22 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/07 21:20:21 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"


class   Point {
	private:
		const Fixed	x;
		const Fixed	y;

	public:
		Point();
		~Point();
		Point(const float x,const float y);
		Point(Point const &point);
		Point& operator=(const Point &point);
		const Fixed getX(void) const;
		const Fixed getY(void) const;
};

float calculatingSign(Point const &A, Point const &B, Point const &M);
bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);


#endif
