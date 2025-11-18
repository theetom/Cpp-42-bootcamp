/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:09:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/18 16:46:40 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int comp(0);
int dcomp(0);

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

int jacobstalNumber(int n)
{
	return (round((pow(2, n + 1) + pow(-1, n)) / 3));
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
void pairMaking(T &vector, size_t &n)
{
	size_t i(n - 1);
	while (i + (n) - 1 < vector.size())
	{
		comp++;
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

void insertVector(std::vector<int> &vector, std::vector<int> &pend, size_t &n)
{
	std::cout << "pend.size " << pend.size() << " n " << n << std::endl;
	std::cout << "jacobstal :" << jacobstalNumber(pend.size() / n) - jacobstalNumber(pend.size() / n - 1)
			<< "\ninput :" << pend.size() / n << std::endl;
	for (std::vector<int>::iterator it = pend.end() - 1; it >= pend.begin(); it = it - n)
	{
		std::vector<int>::iterator it2 = vector.begin() + (n - 1);
		while (it2 < vector.end())
		{
			comp++;
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
			// std::cout << "it2 " << *it2 << " it " << *it << std::endl;
			comp++;
			if (*it2 >= *it)
			{
				T tmp;
				typename T::iterator itToCompare = it2;
				for (size_t i = 0; i < n; i++)
				{
					tmp.push_front(*(it - i));
				}
				vector.insert(it2 - n + 1, tmp.begin(), tmp.end());
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
	}
}

void vectorActualSorting(std::vector<int> &vector, size_t &n)
{
	if (vector.size() / 2 >= n) 
	{
		pairMaking(vector, n);
		vectorActualSorting(vector, n);
	}
	std::vector<int> pend(extractPend(vector, n));
	if (pend.size() != 0)
	{
		insertVector(vector, pend, n);
	}
}

template <typename T>
void actualSorting(T &container, size_t &n)
{
	if (container.size() / 2 >= n)
	{
		pairMaking(container, n);
		actualSorting(container, n);
	}
	T pend(extractPend(container, n));
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
	std::cout << "\nSorted:";
	std::sort(temp.begin(), temp.end());
	printContainer(temp);
	size_t n = 1; (void)n;
	vectorActualSorting(this->_vector, n);
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
	actualSorting(this->_deque, n);


	gettimeofday(&end, NULL);
	this->_dqTime = (end.tv_sec - start.tv_sec) * 1e6;
	this->_dqTime = (this->_dqTime + (end.tv_usec - start.tv_usec)) * 1e-6;
}

int F(int n)
{
    int sum = 0;
    for (int k = 1; k <= n; ++k) {
        double value = (3.0 / 4.0) * k;
        sum += static_cast<int>(ceil(log2(value)));
    }
    return sum;
}

PmergeMe::PmergeMe(char **input)
{
	simpleParser(input);

	std::cout << std::endl << "Input:";
	for (char **tmp = input; *tmp; tmp++)
		std::cout << " " << *tmp;
	std::cout << std::endl;
	this->dequeSort(input);
	dcomp = comp;
	comp = 0;
	this->vectorSort(input);
	std::cout << std::endl << "After deque :";
	printContainer(this->_deque);
	std::cout << "deque " << std::fixed << this->_dqTime << std::setprecision(6) << std::endl;
	std::cout << "deque comp " << dcomp << " thoeretical max " << F(_deque.size()) << std::endl;
	std::cout << std::endl << "After vector:";
	printContainer(this->_vector);
	std::cout << "vector " << std::fixed << this->_vTime << std::setprecision(6) << std::endl;
	std::cout << "vector comp " << comp << " thoeretical max " << F(_vector.size()) << std::endl;
}

const char *PmergeMe::FoundNotNumber::what() const throw()
{
	return ("Invalid Input : Not all are numbers");
}

const char *PmergeMe::FoundReapeatedNumber::what() const throw()
{
	return ("Invalid Input : Some numbers are repeated");
}
