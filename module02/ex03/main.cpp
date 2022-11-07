/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:10:23 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/07 19:27:12 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point A(10.55, 10);
    Point B(11.55, 11);
    Point C(12.55, 12);

    Point M(9, 9);
    
    std::cout << bsp(A, B, C , M);
}