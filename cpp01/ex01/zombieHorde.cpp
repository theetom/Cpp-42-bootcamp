/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:26:42 by etom              #+#    #+#             */
/*   Updated: 2025/07/25 10:19:30 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N]();
	// Zombie *zombies2 = new Zombie[N]();

	for (int i = 0; i < N; i++)
		zombies[i].name_setter(name);
	// for (int i = 0; i < N; i++)
	// 	zombies2[i].name_setter(name);

	return (zombies);
}