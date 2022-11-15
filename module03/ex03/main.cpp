/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:44:27 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/15 23:10:43 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScarvTrap.hpp"
#include "FragTrap.hpp"


int main( void )
{
	ClapTrap Clappi("Clappi");
	ScavTrap Scavi("Scavi");
	FragTrap Froggi("Froggi");

	Scavi.guardGate();
	Froggi.highFivesGuys();
	Clappi.attack("Froggi");
	Froggi.takeDamage(20);
	Froggi.attack("Clappi");
	Clappi.takeDamage(20);
	return (0);
}
