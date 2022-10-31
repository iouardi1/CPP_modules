/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:40:47 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/31 14:24:35 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>


class Zombie {
	private:
		std::string  name;
	public:
		Zombie();
		~Zombie();
		Zombie(std::string str);
		void		setZombieName(std::string str);
		std::string	getZombieName();
		void		announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);



#endif
