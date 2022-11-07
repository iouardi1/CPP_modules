/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:14:49 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/04 16:08:35 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include  <iostream>
#include <iomanip>
#include <string>

class   Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		void    setFirstName(std::string fN);
		void    setLastName(std::string lN);
		void    setNickName(std::string nN);
		void    setPhoneNumber(std::string pN);
		void    setDarkestSecret(std::string dS);
	
	public:
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
};


#endif
