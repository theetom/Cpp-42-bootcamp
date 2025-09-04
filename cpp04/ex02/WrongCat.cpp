/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:38:19 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/02 16:38:20 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat Constructor" << std::endl;
 }

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat Destructor" << std::endl;
}

/* WrongCat::WrongCat(std::string type): Animal(type)
{
	this->type = type;
	std::cout << "Type WrongCat Contructor" << std::endl;
} */

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	std::cout << "Copy WrongCat Contructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if(this != &src)
	{
		WrongAnimal::operator=(src);
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMeows" << std::endl;
}
