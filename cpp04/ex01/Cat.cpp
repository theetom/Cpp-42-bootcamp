/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:37:26 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/04 00:47:47 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain())
{
	std::cout << "Default Cat Constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default Cat Destructor" << std::endl;
	delete(this->_brain);
}

/* Cat::Cat(std::string type): Animal(type)
{
	this->type = type;
	std::cout << "Type Cat Contructor" << std::endl;
} */

Cat::Cat(const Cat &copy): Animal(copy), _brain(NULL)
{
	std::cout << "Copy Cat Contructor" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &src)
{
	if(this != &src)
	{
		Animal::operator=(src);
		if (this->_brain != NULL)
			delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meows" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->_brain);
}
