/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:17:00 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/01 16:48:03 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Default Cat Constructor" << std::endl;
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
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meows" << std::endl;
}
