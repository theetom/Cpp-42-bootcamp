/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:15:44 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/04 15:33:24 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain Constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default Brain Destructor" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy Brain Constructor" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &src)
{
	if (this != &src)
	{
		int i = 0;
		while (i < 100)
		{
			this->_ideas[i] = src._ideas[i];
			i++;
		}
	}
	return (*this);
}

void Brain::setIdea(int i, std::string str)
{
	if (0 > i || i >= 100 )
		return ;
	while (i < 100)
	{
		_ideas[i] = str;
		i++;
	}
}

std::string Brain::getIdea(int i)
{
	if (0 <= i && i < 100 )
		return (this->_ideas[i]);
	else
		std::cout << "chose an index between 0 and a 99" << std::endl;
	return (NULL);
}