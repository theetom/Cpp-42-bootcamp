/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:21:16 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/27 17:01:14 by toferrei         ###   ########.fr       */
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
	if (_healthPoints == 0 || _energyPoints == 0)
		std::cout << this->_name
					<< "Doesn't have enough HP or EP to attack."
					<< std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "ClapTrap "
					<< this->_name
					<< " attacks "
					<< target 
					<< ", causing "
					<< this->_attackDamage
					<< " points of damage!"
					<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_healthPoints == 0)
		std::cout << this->_name 
					<< " is already dead"
					<< std::endl;
	if (amount >= this->_healthPoints)
		this->_healthPoints -= amount;
	else
	{	
		amount = this->_healthPoints;
		this->_healthPoints = 0;
	}
	std::cout << this->_name
				<<"takeDamage ced"
				<<""
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0)
		std::cout << this->_name
					<< "Doesn't have enough EP to repair."
					<< std::endl;
	this->_energyPoints--;
	this->_healthPoints += amount;
}