/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:37:51 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/04 00:58:32 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iomanip>

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		const Animal* k = i;
		Brain* catBrain;

		const Cat* cat1 = dynamic_cast<const Cat*>(i);
		if (cat1)
		{
			catBrain = cat1->getBrain();
			catBrain->setIdea(0, "I have a thought");
		}
		const Cat* cat2 = dynamic_cast<const Cat*>(k);
		if (cat2)
		{
			catBrain = cat2->getBrain();
			std::cout << catBrain->getIdea(0)<< std::endl;
		}
		delete j;
		delete i;
	}
		std::cout << "\n" << std::setfill('-') << std::setw(25) << "\n" << std::endl;
	{
		Dog joao;
		joao.getBrain()->setIdea(25, "I want that bone");
		for (int i = 0; i < 100; i++)
			joao.getBrain()->setIdea(i, "I am the bone");
		Dog paulo(joao);
		Dog cristovao = joao;
		std::cout << cristovao.getBrain()->getIdea(25) << std::endl;
		std::cout << paulo.getBrain()->getIdea(25) << std::endl;
		for (int i = 0; i < 100; i++)
			std::cout << cristovao.getBrain()->getIdea(i)<< std::endl;
	}
		std::cout << "\n" << std::setfill('-') << std::setw(25) << "\n" << std::endl;
	{
		Cat joao;
		joao.getBrain()->setIdea(25, "I want that fish");
		for (int i = 0; i < 100; i++)
			joao.getBrain()->setIdea(i, "I am the fish");
		Cat paulo(joao);
		Cat cristovao = joao;
		std::cout << cristovao.getBrain()->getIdea(25) << std::endl;
		std::cout << paulo.getBrain()->getIdea(25) << std::endl;
		// for (int i = 0; i < 100; i++)
			// std::cout << cristovao.getBrain()->getIdea(i)<< std::endl;
	}

	return 0;
}