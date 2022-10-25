/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:33:24 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/25 03:31:26 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#include "Contact.hpp"

class   PhoneBook {
	private :
		Contact contacts[8];
		int	 	i;
	public :
		PhoneBook();
		~PhoneBook();
		void	addContact();
		Contact	getContact(int i);
		void	searchContact();
		
};

#endif