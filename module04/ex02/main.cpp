/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:08:21 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/26 22:19:37 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{

	Dog a = Dog();
	Animal *animal = new Dog();

	animal->makeSound();
	
	Dog b = a;
	
	a = b;
	delete animal;
	// system("leaks Animal");
	return 0;
}
