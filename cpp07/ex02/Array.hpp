/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:52:25 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/15 15:08:59 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

# define ARRAY_HPP

template <typename T> class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		Array &operator=(const Array &src);
		T &operator[](unsigned int n);
		T const &operator[](unsigned int n) const;

		unsigned int size() const;

		class OutOfBoundException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		}

	private :
		unsigned int _n;
		T *_arr;
};

#endif