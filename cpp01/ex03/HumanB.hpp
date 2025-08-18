/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:34:23 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/18 17:35:57 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_B
# define HUMANB_B

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	private:
		Weapon *_weapon;
		std::string _name;

	public:
		HumanB();
		HumanB(std::string humanName);
		~HumanB();

		void setWeapon(Weapon &newWeapon);
		void attack();

};

#endif