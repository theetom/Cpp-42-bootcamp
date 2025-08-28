/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:18:02 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/28 18:24:57 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap temp("Pedro");

	std::cout << "\n da um salto\n" << std::endl;

	ClapTrap clap("clap");

	std::cout << "\n da um salto\n" << std::endl;

	FragTrap frag("olaola");

	std::cout << "\n da um salto\n" << std::endl;

	clap.attack("someone");
	temp.attack("someone else");
	frag.attack("another someone");

	frag.highFivesGuys();

	temp.guardGate();
	ScavTrap temp1 = temp;
	temp.guardGate();
	temp1.guardGate();
	// for (int i = 0; i < 12; i++)
	// 	temp.attack("Pedro");
	// for (int i = 0; i < 12; i++)
	// 	temp.takeDamage(1);
	// for (int i = 0; i < 10; i++)
	// 	temp.beRepaired(1);
	// for (int i = 0; i < 12; i++)
	// 	temp.takeDamage(1);
	// for (int i = 0; i < 10; i++)
	// 	temp.beRepaired(1);

}
