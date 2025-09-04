/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:16:09 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/04 15:39:26 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain())
{
	std::cout << "Default Dog Constructor" << std::endl;
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

Dog::Dog(const Dog &copy): Animal(copy),_brain(NULL)
{
	std::cout << "Copy Dog Contructor" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &src)
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

void Dog::makeSound() const
{
	std::cout << "Barks" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->_brain);
}
