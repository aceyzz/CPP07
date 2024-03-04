/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:30:12 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/04 19:31:35 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP
# include "Array.hpp"
# include "colors.hpp"

/* -------------------------------------------------------------------------- */
	// CONSTRUCTORS AND DESTRUCTS
/* -------------------------------------------------------------------------- */
template <typename T>
Array<T>::Array() : _elements(new T[0]), _size(0) {}

template <typename T>
Array<T>::Array(uint size) : _elements(new T[size]), _size(size) {}

template <typename T>
Array<T>::Array(const Array &src) : _elements(new T[src._size]), _size(src._size)
{
	for (uint i = 0; i < src._size; i++)
		_elements[i] = src._elements[i];
}

template <typename T>
Array<T>::~Array()
{
	delete [] _elements;
}

/* -------------------------------------------------------------------------- */
	// OVERCHARGED OPERATORS
/* -------------------------------------------------------------------------- */
template <typename T>
Array<T>&	Array<T>::operator=(const Array &src)
{
	if (this != &src)
	{
		delete [] _elements;
		_size = src._size;
		_elements = new T[src._size];
		for (uint i = 0; i < _size; i++)
			_elements[i] = src._elements[i];
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](uint index)
{
	if (index >= _size)
		throw OutOfBoundsException();
	else
		return (_elements[index]);
}

template <typename T>
const T&	Array<T>::operator[](uint index) const
{
	if (index >= _size)
		throw OutOfBoundsException();
	else
		return (_elements[index]);
}

/* -------------------------------------------------------------------------- */
	// EXCEPTION OUT OF BOUNDS
/* -------------------------------------------------------------------------- */
template <typename T>
const char*	Array<T>::OutOfBoundsException::what() const throw()
{
	return (REDD "Index is out of bounds !" RST);
}

/* -------------------------------------------------------------------------- */
	// MEMBER FUNCTIONS
/* -------------------------------------------------------------------------- */
template <typename T>
uint	Array<T>::size() const
{
	return (_size);
}

#endif
