/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:46:40 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/15 13:55:01 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP

# define WHATEVER_HPP

#include <iostream>

template <typename T> T min(T x, T y)
{
	return (x < y ? x : y);
}

template <typename T> T max(T x, T y)
{
	return (x > y ? x : y);
}

template <typename T>  void swap(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

#endif