/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:29:51 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 19:36:59 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &copy);
		Cat& operator=(const Cat &copy);
		Animal& operator=(const Animal &copy);
		void	makeSound() const;
		Brain*	getBrain() const;
};

#endif
