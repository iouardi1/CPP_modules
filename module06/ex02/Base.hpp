/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:20:01 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/10 00:11:27 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <time.h>

class   Base
{
	public:
		virtual ~Base();
};

class	A: public Base
{
	
};

class	B: public Base
{
	
};

class	C: public Base
{
	
};

Base*	generate(void);
void    identify(Base *p);
void	identify(Base& p);

#endif