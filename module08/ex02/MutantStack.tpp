/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:57:01 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/16 21:24:15 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack::MutantStack(): std::stack<T>()
{
	std::cout << "Default constructor is called" << std::endl;
}

template <typename T>
MutantStack::~MutantStack()
{
	std::cout << "Destructor is called" << std::endl
}

template <typename T>
MutantStack::MutantStack(const MutantStack& copy): std::stack<T>(copy)
{
	std::cout << "copy constructor is called" << std::endl;
}

MutantStack &operator=(const MutantStack& copy)
{
	this->c = copy.c;
	std::cout << "assignment operator is called" << std::endl;
	return *this;
}

template <typename T>
typedef typename std::stack<T>::container_type::iterator
MutantStack::begin()
{
	return (this->c.begin());
}

template <typename T>
typedef typename std::stack<T>::container_type::const_iterator
MutantStack::begin() const
{
	return (this->c.begin());
}

template <typename T>
typedef typename std::stack<T>::container_type::iterator
MutantStack::end()
{
	return (this->c.end());
}

template <typename T>
typedef typename std::stack<T>::container_type::const_iterator
MutantStack::end() const
{
	return (this->c.end());
}

