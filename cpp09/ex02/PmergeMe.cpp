/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:09:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/05 17:25:28 by toferrei         ###   ########.fr       */
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

PmergeMe::PmergeMe(char **input)
{
	while (*input)
	{
		for (size_t i = 0; (*input)[i]; i++)
			if (!std::isdigit((*input)[i]))
				throw PmergeMe::InvalidInput();
		this->_list.push_back(std::atoi(*input));
		this->_vector.push_back(std::atoi(*input));
		input++;
	}
}




const char *PmergeMe::InvalidInput::what() const throw()
{
	return ("Invalid Input");
}
