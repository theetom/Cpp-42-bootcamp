/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 07:57:10 by etom              #+#    #+#             */
/*   Updated: 2025/07/25 10:19:24 by toferrei         ###   ########.fr       */
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
	std::cout << name << " was destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::name_setter(std::string new_name)
{
	name = new_name;
}

std::string Zombie::name_getter()
{
	return (name);
}
