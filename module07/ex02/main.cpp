/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 22:31:06 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/13 04:21:02 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"




#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}




// int	main( void )
// {
// 	try
// 	{   
// 		Array<std::string> arr(10);
// 		std::cout << arr.size() << std::endl;
// 		arr.setArr("haaa string 1", 0);
// 		arr.setArr("haaa string 2", 1);
// 		arr.setArr("haaa string 3", 2);
// 		arr.setArr("haaa string 4", 3);
// 		arr.setArr("haaa string 5", 4);
// 		arr.setArr("haaa string 6", 5);
// 		arr.setArr("haaa string 7", 6);
// 		arr.setArr("haaa string 8", 7);
// 		arr.setArr("haaa string 9", 8);
// 		arr.setArr("haaa string 10", 9);
// 		for (int i = 0; i < 10; i++)
// 			std::cout << "array of strings: " << arr[i] << std::endl;
// 	}
// 	catch( const std::exception& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << "**********************************\n";
// 	std::cout << "**********************************\n";
// 	try
// 	{   
// 		Array<int> arr(10);
// 		std::cout << arr.size() << std::endl;
// 		arr.setArr(100, 0);
// 		arr.setArr(14, 1);
// 		arr.setArr(545, 2);
// 		arr.setArr(4545, 3);
// 		arr.setArr(87879, 4);
// 		arr.setArr(789, 5);
// 		arr.setArr(45453, 6);
// 		arr.setArr(12, 7);
// 		arr.setArr(0, 8);
// 		arr.setArr(-45455, 9);
// 		for (int i = 0; i < 10; i++)
// 			std::cout << "array of integers: " << arr[i] << std::endl;
// 	}
// 	catch( const std::exception& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << "**********************************\n";
// 	std::cout << "**********************************\n";
// 	try
// 	{
// 		Array<char> arr(5);
		
// 		arr.setArr('a', 0);
// 		arr.setArr('C', 1);
// 		arr.setArr('T', 2);
// 		arr.setArr('K', 3);
// 		arr.setArr('P', 4);
		
// 		for (int i = 0; i < 5; i++)
// 			std::cout << "array of integers: " << arr[i] << std::endl;
// 		std::cout << arr[-4] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	// system("leaks array");
// }