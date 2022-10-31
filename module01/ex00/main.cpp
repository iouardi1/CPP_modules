/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:40:38 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/31 14:26:11 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie			*zombiie;
	std::string		str;
	
	std::cout << "enter a name" << std::endl;
	std::getline(std::cin, str);
	zombiie = newZombie(str);
	std::cout << (*zombiie).getZombieName() << std::endl;
	randomChump(str);
	delete (zombiie);
	return 0;
}
