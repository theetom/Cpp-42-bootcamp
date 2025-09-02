/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:37:51 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/02 16:37:53 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AllHeaders.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		j->makeSound();
		i->makeSound(); //will output the cat sound!

		delete (meta);
		delete (j);
		delete (i);

		std::cout << std::setfill('-') << std::setw(100) << "\n" << std::endl;
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound(); //will NOT output the cat sound!
		delete (meta);
		delete (i);

		return 0;
	}
}
