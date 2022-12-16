/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:15:41 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/16 14:56:44 by iouardi          ###   ########.fr       */
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
	v.resize(N);
}

Span::Span(const Span& copy)
{
	*this = copy;
}

span &Span::operator=(const Span &copy)
{
	this->N = copy->N;
	this->v.assign(copy.v.begin(), copy.v.end());
	return *this;
}

void	Span::addNumber(int n)
{
	if (N == v.size())
		throw Except();
	v.resize(v.size() + 1);
	v.push_back(n);
}

int Span::shortestSpan() const
{
	
}