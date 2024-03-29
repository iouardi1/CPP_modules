/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:11:04 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/29 11:53:40 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>


class Zombie {
	private:
		std::string  name;
	public:
		~Zombie();
		Zombie();
		void		setZombieName(std::string str);
		std::string	getZombieName();
		void		announce(void);
};

Zombie*	zombieHorde(int N, std::string name);



#endif
