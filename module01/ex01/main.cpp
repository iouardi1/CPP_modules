/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:22:13 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/29 12:01:25 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie  	*zombiie;
	
	zombiie = zombieHorde(10, "khteeek");

	for (int i = 0; i < 10; i++)
		zombiie[i].announce();
	delete [] zombiie;
}
