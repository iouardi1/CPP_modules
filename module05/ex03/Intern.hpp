/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:28:07 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/05 15:11:11 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"

class Form;


class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& copy);
		Form* makeForm(std::string name, std::string target);
		class UnavailableForm : public std::exception
		{
			const char* what() const throw();
		};
};


#endif