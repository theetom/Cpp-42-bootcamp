/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:53:44 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/23 12:43:08 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0)
{

}

Span::~Span()
{

}

Span::Span(unsigned int N): _N(N)
{

}

Span::Span(const Span &src): _N(src.getN()),
							_arr(src.getArray())
{

}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->_N = src.getN();
		this->_arr = src.getArray();
	}
	return (*this);
}

unsigned int Span::getN() const
{
	return (this->_N);
}

std::vector<int> Span::getArray() const
{
	return (this->_arr);
}

void Span::addNumber(int i)
{
	if (this->_arr.size() >= _N)
	{
		throw Span::ContainerFull();
	}
	this->_arr.push_back(i);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_arr.size() + (end - begin) > this->_N)
		throw Span::ContainerFull();
	this->_arr.insert(this->_arr.end(), begin, end);
}

unsigned int Span::shortestSpan()
{
	std::vector<int> tmp = this->_arr;
	if (this->_arr.size() < 2)
		throw Span::NotEnoughNumbers();
	std::sort(tmp.begin(), tmp.end());
	int val = tmp.at(1) - tmp.at(0);
	for (unsigned int i = 1; i < tmp.size(); i++)
	{
		if (tmp.at(i) - tmp.at(i - 1) <= val)
			val = tmp.at(i) - tmp.at(i - 1);
	}
	return (val);
}

unsigned int Span::longestSpan()
{
	std::vector<int> tmp = this->_arr;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.at(tmp.size() - 1) - tmp.at(0));
}

const char *Span::NotEnoughNumbers::what() const throw()
{
	return ("Not enough numbers in array");
}

const char*Span::ContainerFull::what() const throw()
{
	return ("Container is up to capacity");
}
