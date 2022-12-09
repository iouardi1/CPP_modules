/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:57:11 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/09 17:38:28 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base	*base = generate();
	Base	basse;
	A		a;
	B		b;
	C		c;
	identify(base);
	std::cout << "********************************//\n";
	identify(&a);
	identify(&b);
	identify(&c);
	std::cout << "********************************//\n";
	identify(&basse);
}