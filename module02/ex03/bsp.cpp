/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:35:46 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/07 19:23:23 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calculatingSign(Point const A, Point const B, Point const M)
{
	float	n1;
	// float	n2;
	n1 = ((B.getX().toFloat() - A.getX().toFloat()) * (M.getY().toFloat() - A.getY().toFloat())) - ((M.getX().toFloat() - A.getX().toFloat()) * (B.getY().toFloat() - A.getY().toFloat()));
	// n2 = ((M.getX().toFloat() - A.getX().toFloat()) * (C.getY().toFloat() - A.getY().toFloat())) - ((C.getX.toFloat() - A.getX.toFloat()) * (M.getY().toFloat() - A.getY().toFloat));
	return (n1);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	n1, n2, n3;
	bool	sign;

	n1 = calculatingSign(a, b, point);
	n1 = calculatingSign(a, c, point);
	n1 = calculatingSign(b, c, point);

	if (n1 > 0 && n2 > 0 && n3 > 0)
		return(sign = true);
	return (sign = false);
}
