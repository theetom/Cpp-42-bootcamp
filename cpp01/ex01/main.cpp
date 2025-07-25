/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 07:57:03 by etom              #+#    #+#             */
/*   Updated: 2025/07/25 10:19:18 by toferrei         ###   ########.fr       */
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
