/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:57:01 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/17 20:00:29 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
	std::cout << "Default constructor is called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "Destructor is called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& copy): std::stack<T>(copy)
{
	std::cout << "copy constructor is called" << std::endl;
}

template <typename T>
MutantStack<T> &operator=(const MutantStack<T>& copy)
{
	this->c = copy.c;
	std::cout << "assignment operator is called" << std::endl;
	return *this;
}

template <typename T>
typedef typename std::stack<T>::container_type::iterator
MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typedef typename std::stack<T>::container_type::const_iterator
MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template <typename T>
typedef typename std::stack<T>::container_type::iterator
MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typedef typename std::stack<T>::container_type::const_iterator
MutantStack<T>::end() const
{
	return (this->c.end());
}

