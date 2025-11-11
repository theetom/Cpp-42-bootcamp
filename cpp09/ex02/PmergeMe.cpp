/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:09:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/11 18:59:29 by toferrei         ###   ########.fr       */
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

void simpleParser(char **input) //checks if all inputs are numbers while adding them to a vector (that wont be used after this parser, in order to determine if there are doubles)
{
	std::vector<int> tmp;

	while (*input)
	{
		for (size_t i = 0; (*input)[i]; i++)
		{
			if (!std::isdigit((*input)[i]))
				throw PmergeMe::FoundNotNumber();
		}
		tmp.push_back(atoi(*input));
		input++;
	}
	std::sort(tmp.begin(), tmp.end());
	for (std::vector<int>::iterator it = tmp.begin() + 1; it != tmp.end(); ++it)
	{
		if (*it == *(it - 1))
			throw PmergeMe::FoundReapeatedNumber();
	}
	
}

template <typename T>
void printContainer(T arr)
{
	for (typename T::iterator it = arr.begin(); it < arr.end(); ++it)
	{
		std::cout << ' ' << *it;
	}
	std::cout << std::endl;
}

template <typename T>
void addToContainer(T &container, char **input)
{
	while (*input)
	{
		container.push_back(std::atoi(*input));
		input++;
	}
}

void vectorPairMaking(std::vector<int> &vector, size_t &n)
{
	size_t i(n - 1);
	while (i + n * 2 <= vector.size())
	{
		if (vector.at(i) > vector.at(i + n))
		{
			std::vector<int> tmp;
			for (size_t m = n; m > 0; m--)
			{
				tmp.push_back(vector.at(i - (n - m)));
				vector.erase(vector.begin() + i - (n - m));
			}
			for (size_t m = 0; m < n; m++)
				vector.insert(vector.begin() + i + 1, tmp.at(m));
		}
		i = i + (n * 2);
	}
	n *= 2;
}

std::vector<int>extractPend(std::vector<int> &vector, size_t &n)
{
	std::vector<int> result;
	n /= 2;
	std::cout << n << std::endl;
	for (std::vector<int>::iterator it = vector.begin() + n; it < vector.end() - n; ++it)
	{
		result.push_back(*it);
		vector.erase(it);
	}
	return (result);
}

void vectorActualSorting(std::vector<int> &vector, size_t &n)
{
	std::cout << std::endl;
	std::cout << "before pairing" ;
	printContainer(vector);
	if (vector.size() / 2 >= n) // <=> 
	{
		vectorPairMaking(vector, n);
		std::cout << "after pairing" ;
		printContainer(vector);
		vectorActualSorting(vector, n);
	}
	// recursion is done, every second number of the sequence is the "strong"
	std::vector<int> pend(extractPend(vector, n));
	if (pend.size() != 0)
	{
		printContainer(pend);
		std::cout << std::endl;
	}
}

void PmergeMe::vectorSort(char **input)
{
	struct timeval start, end;
	gettimeofday(&start, NULL);

	addToContainer(this->_vector, input);

	size_t i = 1;
	vectorActualSorting(this->_vector, i);













	gettimeofday(&end, NULL);
	this->_vTime = (end.tv_sec - start.tv_sec) * 1e6;
	this->_vTime = (this->_vTime + (end.tv_usec - start.tv_usec)) * 1e-6;
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
	std::cout << std::endl;
	this->listSort(input);
	this->vectorSort(input);
	std::cout << std::endl << "After:";
	printContainer(this->_vector);
	this->_lTime = 0;
	std::cout << "list " << this->_lTime << std::setprecision(6) << std::endl;
	std::cout << "vector " << std::fixed << this->_vTime << std::setprecision(6) << std::endl;
}

const char *PmergeMe::FoundNotNumber::what() const throw()
{
	return ("Invalid Input : Not all are numbers");
}

const char *PmergeMe::FoundReapeatedNumber::what() const throw()
{
	return ("Invalid Input : Some numbers are repeated");
}
