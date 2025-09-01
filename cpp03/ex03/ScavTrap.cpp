/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:22:19 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/01 14:03:45 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(),
						_guarding(0)
{
	std::cout << "ScavTrap default constructor." << std::endl;
	this->_healthPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name),
										_guarding(0)
{
	std::cout << "ScavTrap name constructor for "
				<< this->_name
				<< "."
				<< std::endl;
	this->_healthPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for "
				<< _name
				<< "."
				<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called."
				<< std::endl;
	this->_guarding = copy._guarding;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap assignement operator overload called."
				<< std::endl;
	if (this != &copy)
	{
		ClapTrap::operator=(src);
		this->_guarding = src._guarding;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "Scav Attack!\n";
	if (this->_healthPoints == 0 || this->_energyPoints == 0)
		std::cout << this->_name
					<< " doesn't have enough HP or EP to attack."
					<< std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "ScavTrap "
					<< this->_name
					<< " attacks "
					<< target 
					<< ", causing "
					<< this->_attackDamage
					<< " points of damage! And leaving it with "
					<< this->_energyPoints
					<< " energy points."
					<< std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << _name;
	if (this->_guarding == 0)
		std::cout << " is now guarding gate.";
	else
		std::cout << " stopped guarding gate.";
	this->_guarding ^= 1;
	std::cout << std::endl;
}
