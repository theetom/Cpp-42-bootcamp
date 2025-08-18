/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:56:39 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/18 17:35:18 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string weapon):_type(weapon)
{

}

Weapon::~Weapon()
{

}

const std::string &Weapon::getType()
{
	return (_type);
}

void Weapon::setType(std::string newWeapon)
{
	_type = newWeapon;
}