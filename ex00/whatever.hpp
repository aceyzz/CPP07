/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:40:39 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/04 17:40:39 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T&	min(T &a, T &b)
{
	return ((a < b) ? a : b);
}

template<typename T>
const T&	max(T &a, T &b)
{
	return ((a > b) ? a : b);
}
