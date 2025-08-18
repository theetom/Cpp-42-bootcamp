/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:56:04 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/18 14:56:06 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
	
}

// Nao funciona inicializar tudo de uma vez tambem (Zombie *zombies = new Zombie[N](name))
// Zombie::Zombie(std::string new_name)
// {
// 	name = new_name;
// }

Zombie::~Zombie()
{
	std::cout << _name << " was destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::nameSetter(std::string newName)
{
	_name = newName;
}

std::string Zombie::nameGetter()
{
	return (_name);
}
