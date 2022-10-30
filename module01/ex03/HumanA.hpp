/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:18:34 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/30 20:39:52 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA {
	private:
		std::string	name;
		Weapon		&weapon;

	public:
		HumanA(std::string str, Weapon &weaapon);
		~HumanA();
		void	attack(void);
		Weapon  &getWeapon();
		void    setWeapon(Weapon &weaapon);
	
};

#endif