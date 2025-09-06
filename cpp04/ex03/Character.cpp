/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:08:31 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/06 10:40:03 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():_name("empty")
{
	for (int i = 0; i < INVENTORY; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY; i++)
		if (_inventory[i])
			delete (_inventory[i]);
}

Character::Character(const std::string &name):_name(name)
{
	for (int i = 0; i < INVENTORY; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &src)