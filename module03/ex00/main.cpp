/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:44:27 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/08 17:02:12 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// int main()
// {
// 	ClapTrap john("John");
// 	ClapTrap jim("Jim");
// 	ClapTrap joe("Joe");

// 	john.attack("Marge");
// 	john.attack("Bart");
// 	john.attack("Homer");
// 	john.takeDamage(5);
// 	jim.takeDamage(9);
// 	jim.takeDamage(10);
// 	joe.beRepaired(10);
// 	joe.takeDamage(19);
// }

int main(void)
{
	ClapTrap foo("foo");
	ClapTrap bar("bar");
	
	foo.setAttackDamage(7);

	// std::cout << std::endl << foo << bar << std::endl;

	foo.attack(bar.getName());
	bar.takeDamage(foo.getAttackDamage());

	// std::cout << std::endl << foo << bar << std::endl;

	bar.beRepaired(5);

	// std::cout << std::endl << foo << bar << std::endl;

	return (0);
}
