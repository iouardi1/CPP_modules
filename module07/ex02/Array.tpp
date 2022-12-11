/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:53:35 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/11 23:49:30 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _size(0), arr(NULL)
{
	std::cout << "default constructor of array is called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n), arr(new T[n])
{
	// for (unsigned int i = 0; i < n; i++)
	// 	arr[i] = 0;
	std::cout << "constructor of array is called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array& copy)
{
	*this = copy;
	std::cout << "Copy constructor of array is called" << std::endl;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& copy)
{
	_size = copy._size;
	arr = new T[(copy._size)];
	for (unsigned int i = 0; i < copy._size; i++)
		arr[i] = (copy.arr[i]);
	std::cout << "assignment operator of array is called" << std::endl;
	return *this;
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return _size;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i < 0 || i >= this->_size)
		throw Except();
	return arr[i];
}

template <typename T>
const char *Array<T>::Except::what() const throw()
{
	return ("index not valid");
}