/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:10:23 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/07 19:31:55 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// int main()
// {
//     Point A(10.55, 10);
//     Point B(11.55, 11);
//     Point C(12.55, 12);

//     Point M(5, 0);
    
//     std::cout << bsp(A, B, C , M) << std::endl;
// }

int main( void )
{
    Point    A(20, 30);
    Point    B(30, 40);
    Point    C(45, 25);
    Point    X(25, 30);  //inside
    Point    Y(40, 32); //outside
    Point    Z(25, 35);   //outside : on the edge.

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