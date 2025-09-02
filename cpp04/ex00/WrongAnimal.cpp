/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:53:59 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/02 16:09:11 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("some wrong animal")
{
	std::cout << "Default WrongAnimal Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "Type WrongAnimal Contructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy WrongAnimal Contructor" << std::endl;
	*this = copy;
	
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	if(this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongGrowls" << std::endl;
}