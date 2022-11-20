/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:44:27 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/20 20:47:25 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScarvTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap	demy("demy");

	std::cout << demy.ClapTrap::getName() << std::endl;
	std::cout << demy.getName() << std::endl;
	demy.guardGate();
	demy.highFivesGuys();
	demy.attack("Froggi");
	demy.takeDamage(20);
	demy.attack("Clappi");
	demy.takeDamage(20);
	demy.whoAmI();
	return (0);
}
