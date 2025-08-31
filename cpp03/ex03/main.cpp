/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:27:56 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/31 18:05:07 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << std::endl << "Diamondito" << std::endl << std::endl;

	DiamondTrap diamondito("diamondito");

	std::cout << "\n"  << std::setfill ('-') << std::setw (100)
				<< "\n" << std::endl;

	diamondito.attack("someone");
	diamondito.attack("someone else");
	diamondito.attack("another someone");
	diamondito.attack("well I don't know anymore");
	diamondito.attack("I think we've attacked enough people");

	std::cout << "\n" << std::setfill ('-') << std::setw (100)
				<< "\n" << std::endl;

	diamondito.guardGate();
	diamondito.highFivesGuys();
	diamondito.whoAmI();
	diamondito.guardGate();
	diamondito.takeDamage(20);
	diamondito.beRepaired(10);

	std::cout << "\n" << std::setfill ('-') << std::setw (100)
				<< "\n" << std::endl;

	DiamondTrap bobito(diamondito);

	std::cout << "\n" << std::setfill ('-') << std::setw (100)
				<< "\n" << std::endl;

	bobito.takeDamage(20);
	bobito.beRepaired(10);
	bobito.whoAmI();
	bobito.guardGate();
	bobito.highFivesGuys();

	std::cout << "\n" << std::setfill ('-') << std::setw (100)
				<< "\n" << std::endl;

	bobito = diamondito;

	std::cout << "\n" << std::setfill ('-') << std::setw (100)
				<< "\n" << std::endl;

	bobito.whoAmI();
	bobito.guardGate();
	bobito.highFivesGuys();

	std::cout << "\n" << std::setfill ('-') << std::setw (100)
				<< "\n" << std::endl;

	bobito.takeDamage(20);
	bobito.beRepaired(10);
	
	std::cout << "\n" << std::setfill ('-') << std::setw (100)
				<< "\n" << std::endl;

}