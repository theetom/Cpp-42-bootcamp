/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:21:16 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/05 10:10:38 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():	_name("some name"),
						_healthPoints(10),
						_energyPoints(10),
						_attackDamage(0)
{
	std::cout << "ClapTrap default constructor called."
				<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for "
				<< _name
				<< "."
				<< std::endl;
}

ClapTrap::ClapTrap( std::string name ):	_name(name),
										_healthPoints(10),
										_energyPoints(10),
										_attackDamage(0)
{
	std::cout << "ClapTrap name constructor called for "<< _name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy):_name(copy._name)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &src )
{
	std::cout << "ClapTrap assignment operator overload called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_healthPoints = src._healthPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_healthPoints == 0 || this->_energyPoints == 0)
		std::cout << this->_name
					<< " doesn't have enough HP or EP to attack."
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
					<< " points of damage! And leaving itself with "
					<< this->_energyPoints
					<< " energy points."
					<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_healthPoints == 0)
	{	
		std::cout << this->_name 
					<< " is already dead"
					<< std::endl;
		return ;
	}
	if (amount <= this->_healthPoints)
		this->_healthPoints -= amount;
	else
	{	
		amount = this->_healthPoints;
		this->_healthPoints = 0;
	}
	std::cout << this->_name
				<<" has taken "
				<< amount
				<< " damage, leaving him with "
				<< this->_healthPoints
				<< " remaining Health Points."
				<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_healthPoints == 0)
	{	
		std::cout << this->_name 
					<< " is already dead"
					<< std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{	std::cout << this->_name
					<< "Doesn't have enough EP to repair."
					<< std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_healthPoints += amount;
	std::cout << this->_name
				<< " repaired itself by "
				<< amount
				<< ", leaving him with "
				<< this->_energyPoints
				<< " energy points and "
				<< this->_healthPoints
				<< " health points."
				<< std::endl;
}
