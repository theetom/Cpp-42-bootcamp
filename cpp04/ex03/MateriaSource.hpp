/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:27:35 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/05 22:50:15 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Character.hpp"

class MateriaSource : virtual public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(std::string type);
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &src);

		void learnMateria(AMateria *materia);
		

	private:
		AMateria*	_table[INVENTORY];
};


#endif