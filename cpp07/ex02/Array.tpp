/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:52:10 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/15 15:25:56 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>Array<T>::Array(): _arr(NULL), _n(0)
{
	
}

template <typename T>Array<T>::Array(unsigned int n): _arr(new T[n]), _n(n)
{

}

template <typename T>Array<T>::Array(const Array &src): _arr(new T[src.size()]), _n(src.size())
{
	for (unsigned int i = 0; i < _n; i++)
		this->_arr[i] = src._arr[i];
}

template <typename T>Array<T> &Array<T>::operator=(const Array &src)
{
	if (this != src)
	{
		delete this->_arr;
		this->_n = src.size();
		this->_arr = new T[src.size()]
		for (unsigned int i = 0; i < _n; i++)
			this->_arr[i] = src._arr[i];
	}
	return (*this);
}

template <typename T>T &Array<T>::operator[](unsigned int n)
{
	if (n >= _n)
		throw OutOfBoundException();
	return (_arr[n]);
}

template <typename T>T const &Array<T>::operator[](unsigned int n) const
{
	if (n >= _n)
		throw OutOfBoundException();
	return (_arr[n]);
}

template <typename T>const char *Array<T>::OutOfBoundException::what() const throw()
{
	return ("Index out of bounds");
}