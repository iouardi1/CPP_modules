/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 03:36:25 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/17 20:05:58 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <queue>
#include <stack>

class Except: public std::exception
{
	const char *what() const throw();
};

const char * Except::what() const throw()
{
	return ("Element not found");
}

template <typename  T>
int	easyfind(const T &container, int i)
{
	typename T::const_iterator itr = std::find(container.begin(), container.end(), i);
	if (itr == container.end())
		throw Except();
	return (*itr);
}

int	easyfind(std::queue<int> q, int i)
{
	while (!q.empty() && q.front() != i)
		q.pop();
	
	if (q.empty())
		throw Except();
	return (q.front());
}

int	easyfind(std::stack<int> s, int i)
{
	while (!s.empty() && s.top() != i)
		s.pop();
	
	if (s.empty())
		throw Except();
	return (s.top());
}

#endif