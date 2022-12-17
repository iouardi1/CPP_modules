/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:57:01 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/17 23:47:27 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename container>
MutantStack<T, container>::MutantStack(): std::stack<T, container>()
{
	std::cout << "Default constructor is called" << std::endl;
}

template <typename T, typename container>
MutantStack<T, container>::~MutantStack()
{
	std::cout << "Destructor is called" << std::endl;
}

template <typename T, typename container>
MutantStack<T, container>::MutantStack(const MutantStack<T, container>& copy): std::stack<T, container>(copy)
{
	std::cout << "copy constructor is called" << std::endl;
}

template <typename T, typename container>
MutantStack<T, container> &MutantStack<T, container>::operator=(const MutantStack<T, container>& copy)
{
	this->c = copy.c;
	std::cout << "assignment operator is called" << std::endl;
	return *this;
}

template <typename T, typename container>
typename std::stack<T>::container_type::iterator	MutantStack<T, container>::begin()
{
	return (this->c.begin());
}

template <typename T, typename container>
typename std::stack<T>::container_type::const_iterator 	MutantStack<T, container>::begin() const
{
	return (this->c.begin());
}

template <typename T, typename container>
typename std::stack<T>::container_type::iterator	MutantStack<T, container>::end()
{
	return (this->c.end());
}

template <typename T, typename container>
typename std::stack<T>::container_type::const_iterator	MutantStack<T, container>::end() const
{
	return (this->c.end());
}

