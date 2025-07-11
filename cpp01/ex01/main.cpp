/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 07:57:03 by etom              #+#    #+#             */
/*   Updated: 2025/07/11 12:10:42 by etom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 10;
	int i = 0;

	Zombie *zombies = zombieHorde(N, "joao");

    while (i < N)
    {
		std::cout << "Zombie no " << i + 1 << " out of " << N << " : ";
        zombies[i].announce();
        i++;
    }
	delete[]zombies;
	return 0;
}
