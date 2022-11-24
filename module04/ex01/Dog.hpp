/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:00:19 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 17:10:19 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &copy);
		Animal& operator=(const Animal &copy);
		void	makeSound() const;
		Brain*	getBrain() const;
};

#endif
