/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:40:40 by toferrei          #+#    #+#             */
/*   Updated: 2025/06/27 20:29:40 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	// int i = 0;
	std::string buf;
	PhoneBook phonebook;
	while (buf.compare("EXIT"))
	{
		std::getline(std::cin, buf);
		buf = buf.substr(0, buf.find(' '));
		if(buf.compare("ADD"))
		{

		}
		
		if(buf.compare("SEARCH"))
		{

		}
	}
	return (0);
}


