/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:51:10 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/24 12:04:14 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain& copy);
		Brain & operator=(const Brain & copy);
};

#endif
