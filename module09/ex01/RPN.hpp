/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 00:50:04 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/25 18:00:32 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>


class   RPN
{
	private:
		std::stack<char>			oper;
		std::stack<int>				elements;

	public:
		RPN();
		~RPN();
		RPN(const RPN& copy);
		RPN	&operator=(const RPN& copy);

	public:
		void	parse_and_calculate(std::string	str);
		void	doMath(char tocken);
		int 	tockenIsValid(char tocken);
		
};




#endif
