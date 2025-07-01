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

//func ADD
//func SEARCH
//func EXIT

void PhoneBook::print()
{
	int i = 0;

	while (i < 7)
	{
		contact_array[i].print_contact();
		i++;
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
		std::cout << index << std::endl;
		index++;
		return 1;
	}
	else
		return 0;
}
