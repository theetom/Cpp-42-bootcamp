/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:37:26 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/03 19:09:15 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Default Cat Constructor" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Default Cat Destructor" << std::endl;
}

/* Cat::Cat(std::string type): Animal(type)
{
	this->type = type;
	std::cout << "Type Cat Contructor" << std::endl;
} */

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Copy Cat Contructor" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	if(this != &src)
	{
		Animal::operator=(src);
		this->_brain = src._brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meows" << std::endl;
}
