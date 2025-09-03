/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:37:39 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/03 19:10:38 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Default Dog Destructor" << std::endl;
	delete (this->_brain);
}

/* Dog::Dog(std::string type): Animal(type)
{
	std::cout << "Type Dog Contructor" << std::endl;
} */

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Copy Dog Contructor" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	if(this != &src)
	{
		Animal::operator=(src);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Barks" << std::endl;
}
