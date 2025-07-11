/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 07:57:10 by etom              #+#    #+#             */
/*   Updated: 2025/07/11 12:05:28 by etom             ###   ########.fr       */
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
