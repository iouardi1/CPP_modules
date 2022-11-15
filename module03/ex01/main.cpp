/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:44:27 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/15 18:43:08 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScarvTrap.hpp"

// int main()
// {
// 	ScavTrap obj;
// 	ScavTrap john;
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

// int main(void)
// {
// 	ClapTrap foo("foo");
// 	ClapTrap bar("bar");
	
// 	foo.setAttackDamage(7);

// 	// std::cout << std::endl << foo << bar << std::endl;

// 	foo.attack(bar.getName());
// 	bar.takeDamage(foo.getAttackDamage());

// 	// std::cout << std::endl << foo << bar << std::endl;

// 	bar.beRepaired(5);

// 	// std::cout << std::endl << foo << bar << std::endl;

// 	return (0);
// }


int main()
{
	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ScavTrap c;
		ScavTrap d("Savage");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		c.attack("CloneTrap");
		// for (int i = 0; i < 50; i++)
		// 	c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		d.attack("Savage-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}

