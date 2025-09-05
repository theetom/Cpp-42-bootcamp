/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:18:02 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/05 09:59:32 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iomanip>

int main()
{
	ScavTrap temp("Scav");

	std::cout << "\n" << std::setfill ('-') << std::setw (15)
				<< "\n" << std::endl;

	ClapTrap clap("clap");

	std::cout << "\n" << std::setfill ('-') << std::setw (15)
				<< "\n" << std::endl;

	FragTrap frag("frag");

	std::cout << "\n" << std::setfill ('-') << std::setw (15)
				<< "\n" << std::endl;

	clap.attack("someone");
	temp.attack("someone else");
	frag.attack("another someone");

	std::cout << "\n" << std::setfill ('-') << std::setw (15)
				<< "\n" << std::endl;

	frag.highFivesGuys();

	std::cout << "\n" << std::setfill ('-') << std::setw (15)
				<< "\n" << std::endl;

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
