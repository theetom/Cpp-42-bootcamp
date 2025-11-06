/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:09:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/06 17:57:17 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{
	
}

PmergeMe::PmergeMe(const PmergeMe &src): _vector(src._vector), _list(src._list)
{
	
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
	if(this != &src)
	{
		this->_list = src._list;
		this->_vector = src._vector;
	}
	return (*this);
}

void simpleParser(char **input)
{
	while (*input)
	{
		for (size_t i = 0; (*input)[i]; i++)
			if (!std::isdigit((*input)[i]))
				throw PmergeMe::InvalidInput();
		input++;
	}
	
}

void PmergeMe::vectorSort(char **input)
{
	(void)input;
	struct timeval start, end;
	gettimeofday(&start, NULL);
	int b = -5000000;
	for (int i = 0; i < 10; i++)
	{
		// for (int d = 0; d < __INT_MAX__ /2; d++)
		// {
			b += 1;
			std::cout << b << std::endl;
		// }
	}
	gettimeofday(&end, NULL);
	this->_vTime = seconds * 1000000.0 + microseconds;
}

void PmergeMe::listSort(char **input)
{
	(void)input;
/* 	this->_lTime = clock();

	for (int i = 0; i < __INT_MAX__; i++)
	{
		for (int d = 0; d < __INT_MAX__; d++)
		{
			int b = 15 / 7;
			b *= 2;
			b /= 12;
		}
	}

	this->_lTime = clock() - this->_lTime; */
}

PmergeMe::PmergeMe(char **input)
{
	simpleParser(input);

	std::cout << "Before:";
	for (char **tmp = input; *tmp; tmp++)
		std::cout << " " << *tmp;

	std::cout << std::endl << "After:";
	this->listSort(input);
	this->vectorSort(input);
	this->_lTime = 0;
	std::cout << "list " << this->_lTime << std::endl;
	std::cout << "vector " << this->_vTime << std::endl;
}

const char *PmergeMe::InvalidInput::what() const throw()
{
	return ("Invalid Input");
}
