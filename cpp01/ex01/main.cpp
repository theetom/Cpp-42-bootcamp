/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:55:42 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/18 14:55:46 by toferrei         ###   ########.fr       */
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
