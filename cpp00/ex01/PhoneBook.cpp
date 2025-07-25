/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:38:30 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/25 10:18:53 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contactsCount = 0;

	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void PhoneBook::printHeader()
{
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << "Index";
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << "First Name";
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << "Last Name";
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << "Nickname";
	std::cout << "|" << std::endl;
}

void PhoneBook::print()
{
	int	i = 0;
	std::string indStr;
	int indInt;

	if (contactsCount == 0)
	{
		std::cout << "No contacts were found." << std::endl;
		return ;
	}
	printHeader();
	while (i < contactsCount)
	{
		contactArray[i].printContact(i);
		i++;
	}
	while (std::cin && indStr.compare("RETURN"))
	{
		std::cout << "Input index of contact to display: ";
		getline(std::cin, indStr);
		indInt = atoi(indStr.c_str());
		if (indInt >= 1 && indInt <= contactsCount)
			return(contactArray[indInt - 1].printContactFull());
		if (indStr.compare("RETURN"))
		{
			std::cout << "You have " << contactsCount << " contacts." << std::endl;
			std::cout << "Please input a number from 1 and to the amount of contacts in your PhoneBook (" << contactsCount << ")" << std::endl;
		}
	}

}

void PhoneBook::moveAllUp()
{
	int i = 0;
	while (i < 7)
	{
		contactArray[i] = contactArray[i + 1];
		i++;
	}
}

bool PhoneBook::add()
{
	Contact temp;
	if (temp.setContact())
	{
		if (contactsCount > 7)
		{
			moveAllUp();
			contactsCount = 7;
		}
		contactArray[contactsCount] = temp;
		contactsCount++;
		return (1);
	}
	else
		return (0);
}
