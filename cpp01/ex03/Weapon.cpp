/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:00:38 by etom              #+#    #+#             */
/*   Updated: 2025/07/25 10:20:00 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)//: _type(type)
{
	_type = type;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
	return (/*this->*/_type);
}

void Weapon::setType(std::string type)
{
	/*this->*/_type = type;
}