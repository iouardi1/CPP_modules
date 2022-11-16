/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:57:12 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/16 22:15:44 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		virtual	~FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);
		FragTrap& operator=(const FragTrap &copy);
		void	highFivesGuys(void);
};



#endif

