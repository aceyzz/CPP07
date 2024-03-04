/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.json                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:28:19 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/04 19:28:19 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <typename T>
class	Array
{
	public:
		Array();
		Array(uint size);
		Array(const Array &src);
		~Array();

		Array&		operator=(const Array &src);
		T&			operator[](uint index);
		const T&	operator[](uint index) const;

		uint	size() const;

		class	OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	
	private:
		T*		_elements;
		uint	_size;
};

#include "Array.tpp"
