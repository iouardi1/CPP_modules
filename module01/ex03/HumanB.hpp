/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:25:03 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/31 12:42:14 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class   HumanB {
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(std::string str);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif
