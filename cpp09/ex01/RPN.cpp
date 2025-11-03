/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:29:22 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/03 19:33:22 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

}

RPN::~RPN()
{

}

std::string cleanInput(std::string input, char c)
{
	for (std::string::iterator it = input.begin(); it < input.end(); it++)
	{
		if (*it == c)
		{
			input.erase(it);
			it--;
		}
	}
	return (input);
}

void RPN::calculate(double a, double b, char c)
{
	if (c == '+')
		this->_values.push(b + a);
	if (c == '-')
		this->_values.push(b - a);
	if (c == '*')
		this->_values.push(b * a);
	if (c == '/' && a != 0)
		this->_values.push(b / a);
	else
		throw RPN::DivisionByZero();
}

RPN::RPN(std::string input)
{
	size_t symbols(0), numbers(0);

	for (std::string::iterator it = input.begin(); it <= input.end(); ++it)
	{
		if (isdigit(*it))
			numbers++;
		else if (input.size() > 1 && (*it == '+' || *it == '-' || *it == '*' || *it == '/'))
			symbols++;
		else
			throw RPN::InvalidInput();
		++it;
		std::cout << "dentro" << std::endl;
		std::cout << *it << std::endl;
		if (input.size() > 1 && it < input.end() && *it != ' ')
			throw RPN::InvalidInput();
		std::cout << "semi fora" <<std::endl;
	}
	std::cout << "sai" << std::endl;
	if (symbols != numbers - 1)
		throw RPN::InvalidInput();
	input = cleanInput(input, ' ');

	for (std::string::iterator it = input.begin(); it != input.end(); ++it)
	{
		if (isdigit(*it))
			this->_values.push(*it);
		else if ((*it == '+' || *it == '-' || *it == '*' || *it == '/') && this->_values.size() > 1)
		{
			int a = this->_values.top();
			this->_values.pop();
			int b = this->_values.top();
			this->_values.pop();
			this->calculate(a, b, *it);
		}
		else
			throw RPN::InvalidInput();
	}
	if (this->_values.size() > 1)
		throw RPN::InvalidInput();
	std::cout << this->_values.top() << std::endl;
}

RPN::RPN(const RPN &src)
{
	*this = src;
}

RPN &RPN::operator=(const RPN &src)
{
	if (this != &src)
		this->_values = src._values;
	return (*this);
}

const char *RPN::InvalidInput::what() const throw()
{
	return ("Input is invalid");
}

const char *RPN::DivisionByZero::what() const throw()
{
	return ("Division by zero");
}