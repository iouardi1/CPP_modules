/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:00:19 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/21 22:55:16 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : virtual public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &copy);
		void	makeSound();
};

#endif
