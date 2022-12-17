/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:15:41 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/17 23:22:08 by iouardi          ###   ########.fr       */
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


void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator itr = start; itr != end; ++itr)
	{
		if (N == v.size())
			throw Except();
		v.push_back(*itr);
	}
}

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
		long	Dist = *(itr + 1) - *itr;
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
	long dist = static_cast<long>(v1[v1.size() - 1] - v1[0]);

	return dist;
}

std::vector<int> Span::getVec() const
{
	return v;
}