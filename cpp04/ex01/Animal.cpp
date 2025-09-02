/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:37:09 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/02 16:37:11 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("some animal")
{
	std::cout << "Default Animal Constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Animal Destructor" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "Type Animal Contructor" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Animal Contructor" << std::endl;
	*this = copy;
	
}

Animal &Animal::operator=(const Animal &src)
{
	if(this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "Growls" << std::endl;
}