/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:38:30 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/01 18:10:00 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdio>

PhoneBook::PhoneBook()
{
	index = 0;

	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void PhoneBook::print()
{
	int	i = 0;
	std::string ind_str;
	int ind_int;

	if (index == 0)
	{
		std::cout << "No contacts were found." << std::endl;
		return ;
	}
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
	while (i <= index)
	{
		contact_array[i].print_contact(i);
		i++;
	}
	while (std::cin && ind_str.compare("RETURN"))
	{
		std::cout << "Input index of contact to display: ";
		getline(std::cin, ind_str);
		ind_int = atoi(ind_str.c_str());
		if (ind_int >= 1 && ind_int <= index)
			return(contact_array[ind_int - 1].print_contact_full());
		if (ind_str.compare("RETURN"))
		{
			std::cout << "You have " << index << " contacts." << std::endl;
			std::cout << "Please input a number between 1 and it (" << index << ")" << std::endl;
		}
	}

}

void PhoneBook::move_all_up()
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
	if (temp.setcontact())
	{
		if (index >= 8)
		{
			move_all_up();
			index = 7;
		}
		contact_array[index] = temp;
		index++;
		return (1);
	}
	else
		return (0);
}
