/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:56:14 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/18 14:56:18 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N]();
	// Zombie *zombies2 = new Zombie[N]();

	for (int i = 0; i < N; i++)
		zombies[i].nameSetter(name);
	// for (int i = 0; i < N; i++)
	// 	zombies2[i].name_setter(name);

	return (zombies);
}
