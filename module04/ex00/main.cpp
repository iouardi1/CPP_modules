/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:08:21 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/22 18:59:50 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* meta = new Animal();
	// const Animal* i = new Cat();
	// std::cout << i->getType() << " " << std::endl;
	// std::cout << j->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	const WrongAnimal* meeta = new WrongAnimal();
	const WrongAnimal* ii = new WrongCat();
	ii->makeSound(); //will output the cat sound!
	meeta->makeSound();
	
	// delete meta;
	delete meeta;
	// delete i;
	delete ii;
	// delete j;
	return 0;
}
