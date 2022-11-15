/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:10:23 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/15 20:12:55 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
    Point    A(0.5, 0.5);
    Point    B(0, -1);
    Point    C(2, 0);
    Point    X(1, 0);  //inside
    Point    Y(1, 1); //outside
    Point    Z(0, 0);   //outside : on the edge.

    if (bsp(A, B, C, X))
        std::cout << "  The point X is inside the triangle !" << std::endl;
    else
        std::cout << "  The point X is outside the triangle !" << std::endl;
    if (bsp(A, B, C, Y))
        std::cout << "  The point Y is inside the triangle !" << std::endl;
    else
        std::cout << "  The point Y is outside the triangle !" << std::endl;
    if (bsp(A, B, C, Z))
        std::cout << "  The point Z is inside the triangle !" << std::endl;
    else
        std::cout << "  The point Z is outside the triangle !" << std::endl;
    return 0;
}
