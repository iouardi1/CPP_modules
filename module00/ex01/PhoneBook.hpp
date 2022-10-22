/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:33:24 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/22 22:55:02 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#include "Contact.hpp"

class   PhoneBook {
	private :
		Contact contacts[8];
	public :
		~PhoneBook();
		void	addContact();
		Contact	getContact(int i);
};

#endif