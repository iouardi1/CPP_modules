/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:23:37 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/09 17:29:31 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	std::cout << "Destructor of base is called" << std::endl;
}

Base *generate(void)
{
	srand(time(0));
	if (rand() % 3 == 0)
		return  new A;
	else if (rand() % 3 == 1)
		return new B;
	else if (rand() % 3 == 2)
		return  new C;
	return  NULL;
}

void    identify(Base *p)
{
	if (dynamic_cast<A *> (p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *> (p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *> (p) != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	Base a;
	Base b;
	Base c;

	try
	{
		a = dynamic_cast<A &> (p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try
	{
		b = dynamic_cast<B &> (p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try
	{
		c = dynamic_cast<C &> (p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
}