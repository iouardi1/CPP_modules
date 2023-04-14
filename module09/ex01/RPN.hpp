/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 00:50:04 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/14 05:06:39 by iouardi          ###   ########.fr       */
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
		std::string					oper;
		std::stack<int>		elements;

	public:
		RPN();
		~RPN();
		RPN(const RPN& copy);
		RPN	&operator=(const RPN& copy);

	public:
		void	parse_and_calculate(std::string	str);
		void	doMath(std::string tocken);
		int 	tockenIsValid(std::string tocken);
		
};




#endif


// stack1		stack2		temp
// 9X			9*8			9
// 8