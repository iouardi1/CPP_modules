/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:07:51 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/16 13:59:45 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <map>
#include <string>


int main()
{
	//vector
	std::cout << "****************** vector *******************" << std::endl;
	try
	{
		std::vector<int> viiictor;

		for (int i = 0; i < 10; i++)
			viiictor.push_back(i);
		std::cout << easyfind(viiictor, 9) << std::endl;
		std::cout << easyfind(viiictor, 7) << std::endl;
		std::cout << easyfind(viiictor, 5) << std::endl;
		std::cout << easyfind(viiictor, 6) << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	//queue
	std::cout << "****************** queue ********************" << std::endl;
	try
	{
		std::queue<int> queuee;

		queuee.push(10);
		queuee.push(100);
		queuee.push(27);
		queuee.push(1);
		queuee.push(66);
		queuee.push(-5);

		std::cout << easyfind(queuee, 27) << std::endl;
		std::cout << easyfind(queuee, 66) << std::endl;
		std::cout << easyfind(queuee, -5) << std::endl;
		std::cout << easyfind(queuee, 7) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	//stack
	std::cout << "****************** stack *******************" << std::endl;
	try
	{
		std::stack<int> s;

		s.push(54);
		s.push(78);
		s.push(96);
		s.push(1);
		s.push(80);
		s.push(-50);

		std::cout << easyfind(s, 78) << std::endl;
		std::cout << easyfind(s, -50) << std::endl;
		std::cout << easyfind(s, 96) << std::endl;
		std::cout << easyfind(s, 1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}