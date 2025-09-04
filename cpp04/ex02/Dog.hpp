/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:16:14 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/04 15:32:14 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		virtual ~Dog();
		// Dog(std::string type);
		Dog(const Dog &copy);
		Dog &operator=(const Dog &src);

		virtual void makeSound() const;

		Brain *getBrain() const;

	private:
		Brain *_brain;
};

#endif