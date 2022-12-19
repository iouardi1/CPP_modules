/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:14:50 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/19 20:29:49 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

class Span
{
	private:
		unsigned int		N;
		std::vector<int>	v;
	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(const Span& copy);
		Span& operator=(const Span& copy);
		
		class Except : public std::exception
		{
			const char *what() const throw();
		};
		
		void	addNumber(int n);
		template <typename iterator>
		void	addNumber(iterator start, iterator end)
		{	
			for (iterator itr = start; itr != end; ++itr)
			{
				if (N == v.size())
					throw Except();
				v.push_back(*itr);
			}
		}
		// template <typename container>
		// void	addNumber(typename container::iterator start, typename container::iterator end);
		long	shortestSpan() const;
		long	longestSpan() const;

		const std::vector<int>& getVec() const;
		
};