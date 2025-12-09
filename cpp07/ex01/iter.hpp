/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:02:18 by toferrei          #+#    #+#             */
/*   Updated: 2025/12/09 14:39:17 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# define ITER_HPP

#include <iostream>

template <typename T>
void iter(const T *arr, const int length, void(*foo)(const T &))
{
	for (int i = 0; i < length; i++)
	{
		foo(arr[i]);
	}
}

template <typename T>
void iter(T *arr, const int length, void(*foo)(T &))
{
	for (int i = 0; i < length; i++)
	{
		foo(arr[i]);
	}
}

template <typename T> void print(T *arr, const int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}


template <typename T> 
void print(const T &f)
{
	std::cout << f << std::endl;
}

#endif