/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:14:50 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/18 16:01:03 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

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
		void	addNumber(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end);
		void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		long	shortestSpan() const;
		long	longestSpan() const;

		std::vector<int>& getVec() const;
		
};