/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:08:21 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 12:40:53 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << "------------------------------------------\n";
	Animal * k[50];
	for (int l = 0; l < 10; l++)
	{
		k[l] = new Dog();
		k[++l] = new Cat();
	}
	std::cout << "------------------------------------------\n";
	for (int l = 0; l < 10; l++)
	{
		delete k[l];
	}
	return 0;
}
