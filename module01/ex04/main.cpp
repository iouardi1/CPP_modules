/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:20:50 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/01 14:06:11 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac , char **av)
{
	std::ifstream	myfile;
	std::string		str;
	size_t			pos, pos2;

	if (ac == 4)
	{	
		std::string		str1(av[1]);
		std::ofstream	myfile2(str1 + ".replace");
		std::string		str2(av[2]);
		std::string		str3(av[3]);
		myfile.open(str1);
		if (myfile.is_open())
		{	
			while (std::getline(myfile, str))
			{
				pos2 = 0;
				do
				{
						pos = str.find(str2, pos2);
						if (pos != std::string::npos)
							str.erase(pos, str2.length()).insert(pos, str3);
						pos2 = pos;
				}	while (pos != std::string::npos);
				myfile2 << str << std::endl;
			}
			myfile.close();
			myfile2.close();
		}
		else
			std::cout << "please enter a valid file\n";
	}
	else
		std::cout << "please enter the right number of args\n";
	
}
