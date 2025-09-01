/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:51:47 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/01 13:28:35 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		~Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &src);

		std::string getType();

		void makeSound();

	protected:
		std::string type;
};

#endif