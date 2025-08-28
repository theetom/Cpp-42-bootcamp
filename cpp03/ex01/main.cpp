/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:18:02 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/28 17:57:54 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap temp("Pedro");
	ClapTrap clap("clap");

	clap.attack("someone");
	temp.attack("someone else");

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
