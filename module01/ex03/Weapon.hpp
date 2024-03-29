/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:38:36 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/09 18:21:04 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class   Weapon{
	private:
		std::string     type;

	public:
		Weapon();
		Weapon(std::string _type);
		~Weapon();
	public:
		const std::string &getType();

	public:
		void	setType(std::string str);
};

#endif
