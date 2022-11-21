/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:16:27 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/21 23:02:52 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class   Animal {
	protected:
		std::string		type;
	public:
		Animal();
		~Animal();
		Animal(std::string _type);
		Animal(const Animal &copy);
		Animal& operator=(const Animal &copy);
		std::string& getType() const;
		void	makeSound();
};

#endif
