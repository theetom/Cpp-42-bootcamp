/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:52:25 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/16 14:37:10 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

# define ARRAY_HPP

#include <fstream>

template <typename T> class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		~Array();
		Array &operator=(const Array &src);
		T &operator[](unsigned int n);
		T const &operator[](unsigned int n) const;

		unsigned int size() const;

		class OutOfBoundException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private :
		T *_arr;
		unsigned int _n;
};

#include "Array.tpp"

template <typename T> std::ostream &operator<<(std::ostream &c, const Array<T> &src);

#endif	