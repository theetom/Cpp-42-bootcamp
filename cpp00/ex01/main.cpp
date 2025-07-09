/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:40:40 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/09 16:35:09 by etom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <curses.h>
#include <csignal>
#include <limits>

int main()
{
	std::cout << "Welcome to my PhoneBook!" << std::endl;
	std::string buf;
	PhoneBook phonebook;
	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);
	while (std::cin && buf.compare("EXIT"))
	{
		std::cout << "You may type ADD, SEARCH or EXIT in the main menu to do the respective action.\n"
			"And type RETURN while in the sub-menus to interrupt input and return to the main menu." << std::endl;
		std::getline(std::cin, buf);
		if(!buf.compare("ADD"))
		{
			std::cout << "You're trying to add a new contact" << std::endl;
			if (phonebook.add() == 0)
				std::cout << "Some error happened, please try again." << std::endl;
		}
		if(!buf.compare("SEARCH"))
			phonebook.print();
	}
	return (0);
}


