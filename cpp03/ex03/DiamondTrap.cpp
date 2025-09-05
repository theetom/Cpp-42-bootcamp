/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:28:04 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/05 10:04:42 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "DiamondTrap default constructor." << std::endl;
	this->_name = "default name";
	this->ClapTrap::_name = _name + "_clap_name";
	this->_healthPoints = FragTrap::_healthPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for "
				<< this->_name
				<< " and "
				<< this->ClapTrap::_name
				<< "."
				<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap name constructor." << std::endl;
	this->_name = name;
	// this->ClapTrap::_name = this->_name + "_clap_name";
	this->_healthPoints = this->FragTrap::_healthPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	std::cout << "DiamondTrap copy constructor called."
				<< std::endl;
	this->_name = copy._name;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap assignement operator overload called."
				<< std::endl;
	if (this != &src)
	{
		ScavTrap::operator=(src);
		// FragTrap::operator=(src);
		this->_name = src._name;
	}
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am "
				<< _name
				<< " and "
				<< ClapTrap::_name
				<< "."
				<< std::endl;
}
