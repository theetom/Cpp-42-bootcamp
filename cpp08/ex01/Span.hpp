/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:53:59 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/21 17:55:42 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

# define SPAN_HPP

#include <exception>
#include <algorithm>
#include <vector>

class Span
{
	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(const Span &src);
		Span &operator=(const Span &src);

		unsigned int getN();

		void addNumber(int i);

		unsigned int shortestSpan();
		unsigned int longestSpan();

		class OutOfBounds : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Out of bounds");
				}
		};

	private:
		unsigned int _N;
		std::vector<int> _arr;
};

#endif