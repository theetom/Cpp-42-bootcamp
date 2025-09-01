/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:21:45 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/01 14:03:30 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor."
				<< std::endl;
	this->_healthPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for "
				<< _name
				<< "."
				<< std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap name constructor for "
				<< this->_name
				<< "."
				<< std::endl;
	this->_healthPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called."
				<< std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap assignement operator overload called."
				<< std::endl;
	if (this != &copy)
	{
		ClapTrap::operator=(src);
	}
	return(*this);
}

void FragTrap::attack(const std::string& target)
{
	std::cout << "Frag Attack!\n";
	if (this->_healthPoints == 0 || this->_energyPoints == 0)
		std::cout << this->_name
					<< " doesn't have enough HP or EP to attack."
					<< std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "FragTrap "
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

void FragTrap::highFivesGuys()
{
	std::cout << "High Fives everyone!!!!!!!" << std::endl;
}
