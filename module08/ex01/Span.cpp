/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:15:41 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/19 20:19:42 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():N(0), v(0)
{
	std::cout << "default constructor is called" << std::endl;
}

Span::~Span()
{
	std::cout << "Destructor is called" << std::endl;
}

Span::Span(unsigned int N): N(N)
{
}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	this->N = copy.N;
	this->v.clear();
	this->v.assign(copy.v.begin(), copy.v.end());
	return *this;
}

const char *Span::Except::what() const throw()
{
	return ("No span can be found");
}

void	Span::addNumber(int n)
{
	if (N == v.size())
		throw Except();
	v.push_back(n);
}

// void	Span::addNumber(typename iterator start, typename iterator end)
// {
// 	for (typename iterator itr = start; itr != end; ++itr)
// 	{
// 		if (N == v.size())
// 			throw Except();
// 		v.push_back(*itr);
// 	}
// }

long	Span::shortestSpan() const
{
	if (v.size() < 2)
		throw Except();
	
	std::vector<int> v1 = v;
	std::sort(v1.begin(), v1.end());

	long	minDist = std::numeric_limits<int>::max();
	std::vector<int>::iterator itr;
	for (itr = v1.begin(); (itr + 1)!= v1.end(); itr++)
	{
		long	Dist = static_cast<long>(*(itr + 1)) - static_cast<long>(*itr);
		if (Dist < minDist)
			minDist = Dist;
	}

	return minDist;
}

long	Span::longestSpan() const
{
	if (v.size() < 2)
		throw Except();

	std::vector<int> v1 = v;

	std::sort(v1.begin(), v1.end());
	long dist = static_cast<long>(static_cast<long>(v1[v1.size() - 1]) - static_cast<long>(v1[0]));

	return dist;
}
