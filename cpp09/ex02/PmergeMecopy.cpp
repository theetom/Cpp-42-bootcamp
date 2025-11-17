/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMecopy.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:09:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/17 15:49:16 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{
	
}

PmergeMe::PmergeMe(const PmergeMe &src): _vector(src._vector), _deque(src._deque)
{
	
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
	if(this != &src)
	{
		this->_deque = src._deque;
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
	for (typename T::iterator it = arr.begin(); it != arr.end(); ++it)
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

template<typename T>
void vectorPairMaking(T &vector, size_t &n)
{
	size_t i(n - 1);
	while (i + (n) - 1 < vector.size())
	{
		if (vector.at(i) > vector.at(i + n))
		{
			T tmp;
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

template <typename T>
T extractPend(T &vector, size_t &n)
{
	T result;
	n /= 2;
	typename T::iterator it = vector.begin() + n;
	while ( n > 0 && it <= vector.end() - n)
	{
		if (std::distance(vector.begin(), it) % (n * 2) == 0)
			for (size_t i = 0; i < n; i++)
				result.push_back(*(it + i));
		it = it + n;
	}
	for (typename T::iterator it = result.begin(); it != result.end(); ++it)
		vector.erase(std::find(vector.begin(), vector.end(), *it));
	return (result);
}

template <typename T>
void insertVector(T &vector, T &pend, size_t &n)
{
	for (typename T::iterator it = pend.end() - 1; it >= pend.begin(); it = it - n)
	{
		typename T::iterator it2 = vector.begin() + (n - 1);
		while (it2 < vector.end())
		{
			if (*it2 >= *it)
			{
				for (size_t i = 0; i < n; i++)
					vector.insert(it2 - n + 1, *(it - i));
				break ;
			}
			it2 = it2 + n;
			if (it2 > vector.end())
			{
				for (size_t i = n; i > 0; i--)
					vector.push_back(*(it - i + 1));
				break ;
			}
		}
		printContainer(vector);

	}
}

template <typename T>
void insertDeque(T &vector, T &pend, size_t &n)
{
	for (typename T::iterator it = pend.end() - 1; it >= pend.begin(); it = it - n)
	{
		typename T::iterator it2 = vector.begin() + (n - 1);
		while (it2 < vector.end())
		{
			std::cout << "it2 " << *it2 << " it " << *it << std::endl;
			if (*it2 >= *it)
			{
				for (size_t i = 0; i < n; i++)
					vector.insert(it2 - n + 1, *(it - i));
				break ;
			}
			it2 = it2 + n;
			if (it2 > vector.end())
			{
				for (size_t i = n; i > 0; i--)
					vector.push_back(*(it - i + 1));
				break ;
			}
		}
		printContainer(vector);

	}
}

template <typename T>
void actualVectorSorting(T &container, size_t &n)
{
	if (container.size() / 2 >= n) // <=> 
	{
		vectorPairMaking(container, n);
		std::cout << "vector after pairing";
		printContainer(container);
		std::cout << "vector size :" << container.size() << std::endl;
		actualVectorSorting(container, n);
	}
	// recursion is done, every second number of the sequence is the "strong"
	
	std::cout << std::endl;
	std::cout << "vector size before pend" << container.size() << std::endl << "vector before pend";
	printContainer(container);
	T pend(extractPend(container, n));
	std::cout << "n " << n << std::endl;
	std::cout << "pend size " << pend.size() << "pend";
	printContainer(pend);
	std::cout << "vector size " << container.size() << "vector";
	printContainer(container);
	if (pend.size() != 0)
	{
		insertVector(container, pend, n);
	}
}

template <typename T>
void actualDequeSorting(T &container, size_t &n)
{
	if (container.size() / 2 >= n) // <=> 
	{
		vectorPairMaking(container, n);
		std::cout << "vector after pairing";
		printContainer(container);
		std::cout << "vector size :" << container.size() << std::endl;
		actualDequeSorting(container, n);
	}
	// recursion is done, every second number of the sequence is the "strong"
	
	std::cout << std::endl;
	std::cout << "vector size before pend" << container.size() << std::endl << "vector before pend";
	printContainer(container);
	T pend(extractPend(container, n));
	std::cout << "n " << n << std::endl;
	std::cout << "pend size " << pend.size() << "pend";
	printContainer(pend);
	std::cout << "vector size " << container.size() << "vector";
	printContainer(container);
	if (pend.size() != 0)
	{
		insertDeque(container, pend, n);
	}
}

void PmergeMe::vectorSort(char **input)
{
	struct timeval start, end;
	gettimeofday(&start, NULL);

	addToContainer(this->_vector, input);
	std::vector<int> temp (this->_vector);
	std::cout << "After:";
	std::sort(temp.begin(), temp.end());
	printContainer(temp);
	size_t n = 1;
	actualVectorSorting(this->_vector, n);
	gettimeofday(&end, NULL);
	this->_vTime = (end.tv_sec - start.tv_sec) * 1e6;
	this->_vTime = (this->_vTime + (end.tv_usec - start.tv_usec)) * 1e-6;
}

void PmergeMe::dequeSort(char **input)
{
	(void)input;
	struct timeval start, end;
	gettimeofday(&start, NULL);
	addToContainer(this->_deque, input);
	size_t n = 1;
	actualDequeSorting(this->_deque, n);


	gettimeofday(&end, NULL);
	this->_dqTime = (end.tv_sec - start.tv_sec) * 1e6;
	this->_dqTime = (this->_dqTime + (end.tv_usec - start.tv_usec)) * 1e-6;
}

PmergeMe::PmergeMe(char **input)
{
	simpleParser(input);

	std::cout << std::endl << "Input:";
	for (char **tmp = input; *tmp; tmp++)
		std::cout << " " << *tmp;
	std::cout << std::endl;
	this->dequeSort(input);
	this->vectorSort(input);
	std::cout << std::endl << "After:";
	printContainer(this->_vector);
	std::cout << std::endl << "After:";
	printContainer(this->_deque);
	std::cout << "deque " << std::fixed << this->_dqTime << std::setprecision(6) << std::endl;
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
