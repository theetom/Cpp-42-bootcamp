/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:00:38 by etom              #+#    #+#             */
/*   Updated: 2025/07/14 15:58:05 by etom             ###   ########.fr       */
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