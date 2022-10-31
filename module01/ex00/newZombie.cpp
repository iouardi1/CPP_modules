/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:48:03 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/31 14:19:20 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		newZombie(std::string name)
{
	Zombie	*zombiie;

	zombiie = new Zombie(name);
	return (zombiie);
}
