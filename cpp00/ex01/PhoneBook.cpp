/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:38:30 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/22 12:40:54 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contacts_count = 0;

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
	std::string ind_str;
	int ind_int;

	if (contacts_count == 0)
	{
		std::cout << "No contacts were found." << std::endl;
		return ;
	}
	printHeader();
	while (i < contacts_count)
	{
		contact_array[i].printContact(i);
		i++;
	}
	while (std::cin && ind_str.compare("RETURN"))
	{
		std::cout << "Input index of contact to display: ";
		getline(std::cin, ind_str);
		ind_int = atoi(ind_str.c_str());
		if (ind_int >= 1 && ind_int <= contacts_count)
			return(contact_array[ind_int - 1].printContactFull());
		if (ind_str.compare("RETURN"))
		{
			std::cout << "You have " << contacts_count << " contacts." << std::endl;
			std::cout << "Please input a number from 1 and to the amount of contacts in your PhoneBook (" << contacts_count << ")" << std::endl;
		}
	}

}

void PhoneBook::moveAllUp()
{
	int i = 0;
	while (i < 7)
	{
		contact_array[i] = contact_array[i + 1];
		i++;
	}
}

bool PhoneBook::add()
{
	Contact temp;
	if (temp.setContact())
	{
		if (contacts_count > 7)
		{
			moveAllUp();
			contacts_count = 7;
		}
		contact_array[contacts_count] = temp;
		contacts_count++;
		return (1);
	}
	else
		return (0);
}
