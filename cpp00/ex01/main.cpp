/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:40:40 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/01 17:33:04 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <curses.h>
#include <csignal>

int main()
{
	std::cout << "Welcome to my PhoneBook" << std::endl;
	std::string buf;
	PhoneBook phonebook;
	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);
	while (std::cin && buf.compare("EXIT"))
	{
		std::cout << "You may ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, buf);
		// buf = buf.substr(0, buf.find(' '));
		if(!buf.compare("ADD"))
		{
			std::cout << "You're trying to add a new contact" << std::endl;
			if (phonebook.add() == 0)
				std::cout << "Some error happened, please try again." << std::endl;
		}
		if(!buf.compare("SEARCH"))
		{
			phonebook.print();
		}
	}
	return (0);
}


