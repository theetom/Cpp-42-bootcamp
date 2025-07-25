/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:00:29 by etom              #+#    #+#             */
/*   Updated: 2025/07/25 10:19:43 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		std::string _name;
		Weapon &_Weapon;

	public:
		// HumanA();
		HumanA(std::string new_name, Weapon &new_weapon);
		~HumanA();
		void attack();
		// void setWeapon(Weapon new_weapon);
};

#endif