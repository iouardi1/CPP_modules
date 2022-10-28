/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:40:38 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/28 18:44:38 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie          zombiie;
	Zombie         *zombiiie;
	std::string     str;
	
	std::cout << "enter a name" << std::endl;
	std::cin >> str;
	// zombiie.setZombieName(str);
	// zombiie.announce();
	zombiiie = newZombie(str);
	std::cout << (*zombiiie).getZombieName();
}