/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:00:27 by etom              #+#    #+#             */
/*   Updated: 2025/07/14 15:58:25 by etom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA()
// {

// }

HumanA::~HumanA()
{

}

HumanA::HumanA(std::string new_name, Weapon &new_weapon): _name(new_name), _Weapon(new_weapon)
{
	/* _name = new_name;
	_Weapon = new_weapon; */
	return ;
}

// void HumanA::setWeapon(Weapon new_weapon)
// {
// 	_Weapon = new_weapon;
// }

void HumanA::attack()
{
	std::cout << /* this-> */_name << " attacks with their " << /* this-> */_Weapon.getType() << std::endl;
}