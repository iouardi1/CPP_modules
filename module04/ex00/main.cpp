/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:08:21 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 19:29:28 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* meeta = new WrongAnimal();
	const WrongAnimal* ii = new WrongCat();
	const WrongCat c;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "----------------Cat sound----------------\n";
	i->makeSound();
	std::cout << std::endl << "----------------Dog sound----------------\n";
	j->makeSound();
	std::cout << std::endl << "------------random animal sound----------\n";
	meta->makeSound();
	std::cout << std::endl << "------------Wrong animal sound-----------\n";
	ii->makeSound();
	std::cout << std::endl << "------------Wrong animal sound-----------\n";
	meeta->makeSound();
	std::cout << std::endl << "-------------Wrong Cat sound-------------\n";
	c.makeSound();
	std::cout << std::endl;

	delete meta;
	delete meeta;
	delete i;
	delete ii;
	delete j;
	return 0;
}
