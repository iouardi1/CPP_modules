/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:16:27 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 23:21:44 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class   Animal {
	protected:
		std::string		type;
	
	public:
		Animal();
		virtual ~Animal();
		Animal(std::string _type);
		Animal(const Animal &copy);
		virtual Animal& operator=(const Animal &copy);
		std::string getType() const;
		virtual void	makeSound() const;
};

#endif
