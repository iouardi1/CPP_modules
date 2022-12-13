/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:53:35 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/13 04:22:39 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


template <typename T>
Array<T>::~Array()
{
	if (arr)
		delete [] arr;
	std::cout << "destructor for array is called\n";
}

template <typename T>
Array<T>::Array(): _size(0), arr(NULL)
{
	std::cout << "default constructor of array is called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	if (n <= 0)
		throw Except();
	this->_size = n;
	this->arr = new T[n];
	for (int i = 0; i < n; i++)
		this->arr[i] = 0;
	std::cout << "constructor of array is called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array& copy): arr(NULL)
{
	*this = copy;
	std::cout << "Copy constructor of array is called" << std::endl;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& copy) const
{
	_size = copy._size;
	if (arr)
		delete[] arr;
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
T& Array<T>::operator[](unsigned int i) const
{
	// std::cout << "subscript operator of Array is called" << std::endl;
	if (i < 0 || i >= this->_size)
		throw Except();
	return arr[i];
}

template <typename T>
const char *Array<T>::Except::what() const throw()
{
	return ("index not valid");
}

template <typename T>
void	Array<T>::setArr(const T& element, unsigned int i)
{
	arr[i] = element;
}

template <typename T>
T& Array<T>::getArr(unsigned int i) const
{
	return arr[i];
}