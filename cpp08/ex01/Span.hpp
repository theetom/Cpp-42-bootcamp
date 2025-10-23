/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:53:59 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/23 10:56:20 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

# define SPAN_HPP

#include <exception>
#include <algorithm>
#include <vector>
#include <iostream>

class Span
{
	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(const Span &src);
		Span &operator=(const Span &src);

		unsigned int getN() const;
		std::vector<int> getArray() const;

		void addNumber(int i);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		unsigned int shortestSpan();
		unsigned int longestSpan();

		class NotEnoughNumbers : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class ContainerFull : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		unsigned int _N;
		std::vector<int> _arr;
};

#endif