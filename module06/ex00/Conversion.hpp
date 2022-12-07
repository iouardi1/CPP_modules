/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:02:57 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/06 22:29:27 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>

class Conversion
{
	private:
		std::string		str;
	public:
		Conversion();
		~Conversion();
		Conversion(const Conversion& copy);
		Conversion& operator=(const Conversion& copy);
		void	toInt() const;
		void	toDouble() const;
		void	toFloat() const;
		// char	toChar() const;
		class Errorexception : public std::exception
		{
			const char *what() const throw();
		};
		//setter
		void	setStr(std::string arg);
		
		
};

#endif