/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:03:16 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/05 16:37:50 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
	private:
		int					i;
		static const int	j;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int n);
		Fixed(const float n);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed &operator= (const Fixed &fixed);
		
};

std::ostream &operator<< (std::ostream& o, const Fixed& fixed);


#endif
