/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:57:11 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/09 23:18:44 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data 
{
	int				i;
	int				j;
	char			c;
	std::string		str;
};

uintptr_t	serialize(Data*	ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	uintptr_t	raw;
	Data		ptr;
	Data		*data;

	ptr.i = 1;
	ptr.j = 2;
	ptr.c = 'a';
	ptr.str = "hada string";

	raw = serialize(&ptr);
	data = deserialize(raw);
	std::cout << raw << std::endl;
	std::cout << "--------------------------------//" << std::endl;
	std::cout << data->i << std::endl;
	std::cout << data->j << std::endl;
	std::cout << data->c << std::endl;
	std::cout << data->str << std::endl;
}