/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:09:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/07 17:42:39 by toferrei         ###   ########.fr       */
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
	size_t i(0);
	// std::cout << "olamain" << std::endl;
	while (i + n * 2 <= vector.size())
	{
		if (vector.at(i) > vector.at(i + n))
		{
			std::vector<int> tmp;
			tmp.clear();
				// std::cout << "ola1" << std::endl;

			for (size_t m = n; m > 0; m--)
			{
				// std::cout << i << std::endl;
				tmp.insert(tmp.begin(), vector.at(i));
				vector.erase(vector.begin() + i);
				// printContainer(vector); std::cout << std::endl;
				// printContainer(tmp); std::cout << std::endl;

			}
				// std::cout << "ola2" << std::endl;

			for (size_t m = 0; m < n; m++)
			{
								// std::cout << "ola3" << std::endl;
				// std::cout << "estou =aqui " << *(vector.begin() + i + n) << std::endl;
				vector.insert(vector.begin() + i + n, tmp.at(m));
			}
			// std::cout << "ola4" << std::endl;
		}
		i = i + (n * 2);
	}
	// std::cout << "estou aqui" << n << std::endl;
	n *= 2;
}

void vectorActualSorting(std::vector<int> &vector, size_t &n)
{
	std::cout << std::endl;
	std::cout << "before pairing" ;
	printContainer(vector);
	if (vector.size() / 2 >= n)
	{
		vectorPairMaking(vector, n);
		std::cout << "after pairing" ;
		printContainer(vector);
		vectorActualSorting(vector, n);
	}
	std::cout << std::endl;
}

void PmergeMe::vectorSort(char **input)
{
	struct timeval start, end;
	gettimeofday(&start, NULL);

	addToContainer(this->_vector, input);

	size_t i = 1;
	try
	{	vectorActualSorting(this->_vector, i);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}












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

const char *PmergeMe::InvalidInput::what() const throw()
{
	return ("Invalid Input");
}
