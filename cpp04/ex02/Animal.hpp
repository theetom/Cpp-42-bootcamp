/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:15:38 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/04 15:22:32 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &src);

		std::string getType() const;

		virtual void makeSound() const = 0;

	protected:
		std::string type;
};

#endif