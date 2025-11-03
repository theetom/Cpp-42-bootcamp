/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:38:11 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/03 19:07:59 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP

# define RPN_HPP
#include <stack>
#include <exception>
#include <iostream>

class RPN
{
	public :
		RPN();
		~RPN();
		RPN(std::string input);
		RPN(const RPN &src);
		RPN &operator=(const RPN &src);
		void calculate(double a, double b, char c);

		class InvalidInput : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class DivisionByZero : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

	private :
		std::stack<double> _values;
};

#endif