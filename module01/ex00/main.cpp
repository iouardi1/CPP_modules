/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:40:38 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/09 17:58:26 by iouardi          ###   ########.fr       */
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
	randomChump(str);
	delete (zombiie);
	return 0;
}
