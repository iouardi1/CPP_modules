/* ************************************************************************** */
/*		                                                                        */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:18:07 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/16 16:00:10 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_H
#define ClapTrap_H

#include <iostream>
#include <string>

class   ClapTrap {
	protected:
		std::string		Name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();
		void	setPoints(unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
		void	setHitPoints(unsigned int hP);
		void	setEnergyPoints(unsigned int eP);
		void	setAttackDamage(unsigned int aD);
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamage() const;
		std::string getName() const;
		void	setName(std::string name);
		ClapTrap &operator=(const ClapTrap &copy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
