/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:21:16 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/26 17:57:20 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():	_name("some name"),
						_healthPoints(10),
						_energyPoints(10),
						_attackDamage(0)
{
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap( std::string name ):	_name(name),
										_healthPoints(10),
										_energyPoints(10),
										_attackDamage(0)
{
	std::cout << "name constructor called for "<< _name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &copy )
{
	std::cout << "Assignment operator overload called" << std::endl;
	this->_name = copy._name;
	this->_healthPoints = copy._healthPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{
	
}

void ClapTrap::beRepaired(unsigned int amount)
{

}