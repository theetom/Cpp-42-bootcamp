/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:00:33 by etom              #+#    #+#             */
/*   Updated: 2025/07/25 10:19:50 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
		Weapon *_Weapon;
		std::string _name;

	public:
		HumanB();
		HumanB(std::string new_name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &new_weapon);
};

#endif