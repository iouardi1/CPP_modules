/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:14:12 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/16 00:02:02 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScarvTrap.hpp"


class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	Name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string _name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap& operator=(const DiamondTrap &copy);
	
};

#endif
