/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:40:15 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/18 17:28:29 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_A
# define HUMANA_A

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;
		HumanA();

	public:
		HumanA(std::string humanName, Weapon &newWeapon);
		~HumanA();

		void attack();

};

#endif