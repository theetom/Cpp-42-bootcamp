/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:57:05 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/18 17:27:59 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon();
		Weapon(std::string weapon);
		~Weapon();
		const std::string &getType();
		void setType(std::string newWeapon);
};

#endif