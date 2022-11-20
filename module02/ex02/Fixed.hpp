/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:54:07 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/18 18:33:53 by iouardi          ###   ########.fr       */
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
		//comparaison operators
		bool operator> (const Fixed &fixed) const;
		bool operator< (const Fixed &fixed) const;
		bool operator>= (const Fixed &fixed) const;
		bool operator<= (const Fixed &fixed) const;
		bool operator== (const Fixed &fixed) const;
		bool operator!= (const Fixed &fixed) const;
		//arithmetic operators
		Fixed operator+ (const Fixed &fixed) const;
		Fixed operator- (const Fixed &fixed) const;
		Fixed operator* (const Fixed &fixed) const;
		Fixed operator/ (const Fixed &fixed) const;
		//i++, ++i, i--, --i
		Fixed operator++ ();
		Fixed operator++ (int);
		Fixed operator-- ();
		Fixed operator-- (int);
		//overloaded mumber functions
		static Fixed &min(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
		static Fixed &max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &max(Fixed const &fixed1, Fixed const &fixed2);
		
};

std::ostream &operator<< (std::ostream& o, const Fixed& fixed);


#endif
