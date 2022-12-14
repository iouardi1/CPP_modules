/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 03:36:25 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/14 17:34:40 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>


class Except: public std::exception
{
	const char *what() const throw();
};

const char * Except::what() const throw()
{
	return ("Element not found");
}

template <typename  T>
std::ostream &operator<<(std::ostream &o, const typename T::const_iterator itr)
{
	o << itr << std::endl;
	return o;
}

template <typename  T>
typename T::const_iterator   easyfind(const T &container, int i)
{
	typename T::const_iterator itr = std::find(container.begin(), container.end(), i);
	if (itr == container.end())
		throw Except();
	return itr;
}

#endif