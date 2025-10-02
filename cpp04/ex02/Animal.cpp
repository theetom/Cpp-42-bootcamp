/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:15:22 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/01 15:34:57 by toferrei         ###   ########.fr       */
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
/home/toferrei/Documents/c++/cpp05/ex01/Bureaucrat.cpp /home/toferrei/Documents/c++/cpp05/ex01/Bureaucrat.hpp /home/toferrei/Documents/c++/cpp05/ex01/Form.cpp /home/toferrei/Documents/c++/cpp05/ex01/Form.hpp /home/toferrei/Documents/c++/cpp05/ex01/main.cpp /home/toferrei/Documents/c++/cpp05/ex01/Makefile
std::string Animal::getType() const
{
	return (type);
}

