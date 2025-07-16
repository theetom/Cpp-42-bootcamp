/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:00:33 by etom              #+#    #+#             */
/*   Updated: 2025/07/14 15:34:20 by etom             ###   ########.fr       */
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