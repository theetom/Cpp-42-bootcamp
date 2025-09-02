/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:13:45 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/01 16:48:08 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		virtual ~WrongCat();
		// WrongCat(std::string type);
		WrongCat(const WrongCat &copy);
		WrongCat &operator=(const WrongCat &src);

		void makeSound() const;
};

#endif