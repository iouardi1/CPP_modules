/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:20:56 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/07 12:35:33 by iouardi          ###   ########.fr       */
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
		bool operator> (const Fixed &fixed);
		bool operator< (const Fixed &fixed);
		bool operator>= (const Fixed &fixed);
		bool operator<= (const Fixed &fixed);
		bool operator== (const Fixed &fixed);
		bool operator!= (const Fixed &fixed);
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
		static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed &max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);
		
};

std::ostream &operator<< (std::ostream& o, const Fixed& fixed);


#endif
