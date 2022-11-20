/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:44:27 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/20 15:52:35 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ihsan("ihsan");
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
}
