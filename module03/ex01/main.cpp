/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:44:27 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/20 17:15:50 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScarvTrap.hpp"

int main()
{
	ScavTrap obj;
	ScavTrap ihsan;
	ClapTrap khtek("khtek");
	ClapTrap batal("batal");

	ihsan.attack("target1");
	ihsan.attack("target2");
	ihsan.attack("target3");
	ihsan.takeDamage(5);
	khtek.takeDamage(9);
	khtek.takeDamage(10);
	batal.beRepaired(10);
	batal.takeDamage(19);
	batal.attack("target4");
	return (0);
}
