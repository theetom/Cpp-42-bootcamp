/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:12:20 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/03 19:26:41 by toferrei         ###   ########.fr       */
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
		this->_ideas = src._ideas;
	}
}
