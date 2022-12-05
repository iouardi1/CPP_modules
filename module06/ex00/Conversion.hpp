/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:02:57 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/05 20:07:35 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>

class Conversion
{
	public:
		Conversion();
		~Conversion();
		Conversion(const Conversion& copy);
		Conversion& operator=(const Conversion& copy);
		
};

#endif