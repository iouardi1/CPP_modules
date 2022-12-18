/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:32:24 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/18 01:44:54 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <vector>
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	
	
	//testing with deque container
	std::cout << "****************** deque *******************\n";
	std::deque<int> q;
	q.push_back(5);
	q.push_back(17);
	std::cout << q.back() << std::endl;
	q.pop_front();
	std::cout << q.size() << std::endl;
	q.push_back(3);
	q.push_back(5);
	q.push_back(737);
	//[...]
	q.push_back(0);
	MutantStack<int>::iterator itr1 = q.begin();
	MutantStack<int>::iterator itr2 = q.end();
	++itr1;
	--itr1;
	while (itr1 != itr2)
	{
	std::cout << *itr1 << std::endl;
	++itr1;
	}

	
	//testing with an actual stack
	std::cout << "****************** vector *******************\n";
	MutantStack<std::string, std::list<std::string> > v2;
	v2.push("hey");
	v2.push("hello");
	std::cout << v2.top() << std::endl;
	v2.pop();
	std::cout << v2.size() << std::endl;
	v2.push("whassup");
	v2.push("yooo");
	v2.push("wesh");
	//[...]
	v2.push("byeee");
	MutantStack<std::string, std::list<std::string> > ::iterator itr3 = v2.begin();
	MutantStack<std::string, std::list<std::string> > ::iterator itr4 = v2.end();
	++itr3;
	--itr3;
	while (itr3 != itr4)
	{
	std::cout << *itr3 << std::endl;
	++itr3;
	}
	
	return 0;
}

