/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:00:31 by etom              #+#    #+#             */
/*   Updated: 2025/07/25 10:19:47 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::~HumanB()
{

}

HumanB::HumanB(std::string new_name)
{
	_name = new_name;
	// _Weapon = (NULL);
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	/* this-> */_Weapon = &new_weapon;
}

void HumanB::attack()
{
	std::cout << /* this-> */_name << " attacks with their " << /* this-> */_Weapon->getType() << std::endl;
}