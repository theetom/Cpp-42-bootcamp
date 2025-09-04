/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:16:04 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/04 15:32:47 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		virtual ~Cat();
		// Cat(std::string type);
		Cat(const Cat &copy);
		Cat &operator=(const Cat &src);

		virtual void makeSound() const;

		Brain *getBrain() const;
	
	private:
		Brain *_brain;
};

#endif