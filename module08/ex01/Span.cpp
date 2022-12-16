/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:15:41 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/16 17:31:40 by iouardi          ###   ########.fr       */
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

int	Span::shortestSpan() const
{
	if (v.size() < 2)
		throw Except();
	
	long dist1;
	
	if (v[0] > v[1])
		dist1 = static_cast<long>(v[0] - (v[1]));
	else 
		dist1 = static_cast<long>(v[1] - v[0]);

	for (unsigned int j = 1; j + 1 < v.size(); j++)
	{
		long dist2;
	
		if (v[j] > v[j + 1])
			dist2 = static_cast<long>(v[j] - v[j + 1]);
		else
			dist2 = static_cast<long>(v[j + 1] - v[j]);

		if (dist1 > dist2)
			dist1 = dist2;
	}
	return dist1;
}

int	Span::longestSpan() const
{
	if (v.size() < 2)
		throw Except();
	
	long dist1;
	
	if (v[0] > v[1])
		dist1 = static_cast<long>(v[0] - (v[1]));
	else 
		dist1 = static_cast<long>(v[1] - v[0]);

	for (unsigned int j = 1; j + 1 < v.size(); j++)
	{
		long dist2;
	
		if (v[j] > v[j + 1])
			dist2 = static_cast<long>(v[j] - v[j + 1]);
		else
			dist2 = static_cast<long>(v[j + 1] - v[j]);

		if (dist1 < dist2)
			dist1 = dist2;
	}
	return dist1;
}

std::vector<int> Span::getVec() const
{
	return v;
}