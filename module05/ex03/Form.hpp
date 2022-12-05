/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:53:20 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/05 11:43:54 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
// #include "Bureaucrat.hpp"
class Bureaucrat;

class Form {

	private:
		const std::string	name;
		bool				sign;
		const	int			gradeSign;
		const	int			gradeExec;
	public:
		Form();
		virtual ~Form();
		Form(const Form &copy);
		Form(std::string name);
		Form(const std::string name, bool sign, const int gradeSign, const int gradeExec);
		Form(const int gradeSign, const int gradeExec);
		Form& operator=(const Form &copy);
		const std::string getName() const;
		bool	getSign() const;
		const int&	getGradeSign() const;
		const int&	getGradeExec() const;
		class	GradeTooHighException: public std::exception
		{
			const	char *what() const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			const char *what() const throw();
		};
		class	FormSignedException: public std::exception
		{
			const char *what() const throw();
		};
		void	beSigned(Bureaucrat const &bureau);
		virtual void	execute(Bureaucrat const &executor) const = 0;
		
};

std::ostream& operator<<(std::ostream& o, const Form& form);

#endif
