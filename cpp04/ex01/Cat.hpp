/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:37:32 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/03 19:09:49 by toferrei         ###   ########.fr       */
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
	
	private:
		Brain *_brain;
};

#endif