/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:34:33 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/06 10:38:21 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

#include "ICharacter.hpp"

#define INVENTORY 4

class Character: virtual public ICharacter
{
	public:
		Character();
		~Character();
		Character(const std::string &name);
		Character(const Character &copy);
		Character& operator=(const Character &src);

		const std::string &getName() const;
		AMateria* getMateria(int idx) const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);



	private:
		std::string _name;
		AMateria* _inventory[INVENTORY];
};

#endif