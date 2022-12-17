/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:47:56 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/17 23:44:09 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <iterator>
#include <algorithm>

template <typename T, typename container = std::deque<T> >
class MutantStack: public std::stack<T, container>
{
	public:
		MutantStack();
		MutantStack(const MutantStack & copy);
		virtual ~MutantStack();
		MutantStack<T, container> &operator=(const MutantStack<T, container> & copy);
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin();
		const_iterator	begin() const;
		
		iterator	end();
		const_iterator	end() const;
};

#endif

