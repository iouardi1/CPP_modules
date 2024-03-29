/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:20:45 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/14 14:11:29 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template   <typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*arr;
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array& copy);
		Array<T>& operator=(const Array &copy);
		unsigned int size() const;
		T& operator[](unsigned int i) const;
		void	setArr(const T & element, unsigned int i);
		T& 	getArr(unsigned int i) const;
		class Except : public std::exception
		{
			const char* what() const throw();
		};
};



#endif