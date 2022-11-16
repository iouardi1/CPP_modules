/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScarvTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:14:38 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/16 17:35:55 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap&	operator=(const ScavTrap &copy);
		void    setHitPoints(unsigned int hP);
		void    setEnergyPoints(unsigned int eP);
		void    setAttackDamage(unsigned int aD);
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamage() const;
		~ScavTrap();
		void	attack( std::string const & target );
		void	guardGate();
};

#endif
