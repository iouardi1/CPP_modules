/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:12:01 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/04 00:52:11 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT
#include <iostream>
#include <exception>

class Form;

class Bureaucrat{
	private:
		const std::string 	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);
		const std::string getName() const;
		int getGrade() const;
		~Bureaucrat();
		void	incrementGrade();
		void	decrementGrade();
		class	GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
		void	signForm(const Form &form);
		void	executeForm(Form const & form);
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureau);

#endif