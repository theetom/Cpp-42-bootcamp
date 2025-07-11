/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:26:42 by etom              #+#    #+#             */
/*   Updated: 2025/07/11 12:29:10 by etom             ###   ########.fr       */
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