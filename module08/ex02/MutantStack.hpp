/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:47:56 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/17 20:01:31 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <algorithm>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack & copy);
		virtual ~MutantStack();
		MutantStack<T> &operator=(const MutantStack<T> & copy);
		
		typedef typename MutantStack<T>::stack::container_type container_type;
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin();
		const_iterator	begin() const;
		
		iterator	end();
		const_iterator	end() const;
};

#endif