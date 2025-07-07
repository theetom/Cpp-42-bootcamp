/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:35:45 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/01 19:21:48 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdio>
#include <iomanip>


Contact::Contact() {
	/* FirstName = "";
	LastName = "";
	Nickname = "";
	PhoneNumber = "";
	DarkestSecret = ""; */
}

Contact::~Contact() {

}

void Contact::print_contact()
{
	if (FirstName.empty())
		return ;
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << FirstName;
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << LastName;
	std::cout << std::endl;
}

bool Contact::is_input_valid(std::string str, int flag)
{
	// std::cout << "OLA \n\n\n\n\n";
	// std::cout << find_if(str.begin(), str.end(), isascii);
	// printf("\nfind:%s\n", &find_if(str.begin(), str.end(), isascii)[0]);
	// printf("\nend:%s\n", &str.end()[0]);
	// std::cout << "\n\n\n\n\n OLA";
	if (find_if(str.begin(), str.end(), isascii) == str.end())
	{	
		std::cout << "numero 1\n";
		return (0);
	}
	if (flag == 1 && find_if(str.begin(), str.end(), isalnum) != str.end())
	{
		std::cout << "numero 2\n";
		return (1);
	}
	if (flag == 2 && find_if(str.begin(), str.end(), isdigit) != str.end())
		return (1);
	return (0);
}

bool Contact::getinput(std::string prompt, std::string &str, int flag)
{
	std::string buf;

	while (std::cin)
	{
		std::cout << prompt;
		getline(std::cin, buf);
		if (!buf.empty() && is_input_valid(buf, flag))
		{
			str = buf;
			return (1);
		}
		else if (!is_input_valid(buf, flag))
			std::cout << "Invalid input: no empty input or try without special characters" << std::endl;
	}
	return (0);
}

bool Contact::setcontact()
{
	std::cout << "ola1";
	if (!getinput("Enter your first name :", FirstName, 1))
		return (0);
	std::cout << "ola2";
	if (!getinput("Enter your last name :", LastName, 1))
		return (0);
	std::cout << "ola3";
	return (1);
}
