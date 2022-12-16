/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:14:50 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/16 14:56:11 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
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
		int		shortestSpan() const;
		int 	longestSpan( const);
		
		
};