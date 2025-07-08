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


Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::print_contact_full()
{
	std::cout << "First Name:" << FirstName << std::endl;
	std::cout << "Last Name:" << LastName << std::endl;
	std::cout << "Nickname:" << Nickname << std::endl;
	std::cout << "Phone number:" << PhoneNumber << std::endl;
	std::cout << "Darkest Secret:" << DarkestSecret << std::endl;
}

std::string Contact::print_field(std::string str)
{
	std::string temp = str;
	if (str.size() > 10)
	{
		temp = temp.substr(0, 9);
		temp += ".";
	}
	return(temp);
}

void Contact::print_contact(int index_num)
{
	if (FirstName.empty())
		return ;
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << ++index_num;
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << print_field(FirstName);
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << print_field(LastName);
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << print_field(Nickname);
	std::cout << "|";
	std::cout << std::endl;
}

bool Contact::is_input_valid(std::string str, int flag)
{
	if (find_if(str.begin(), str.end(), isascii) == str.end())
		return (0);
	if ((flag == 1 && find_if(str.begin(), str.end(), isalnum) != str.end())
		||	(flag == 2 && find_if(str.begin(), str.end(), isdigit) != str.end()))
		return (1);
	return (0);
}

bool Contact::getinput(std::string prompt, std::string &str, int flag)
{
	std::string buf;

	while (std::cin && buf.compare("RETURN"))
	{
		std::cout << prompt;
		getline(std::cin, buf);
		if (!buf.empty() && is_input_valid(buf, flag) && buf.compare("RETURN"))
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
	if (!getinput("Enter your first name :", FirstName, 1))
		return (0);
	if (!getinput("Enter your last name :", LastName, 1))
		return (0);
	if (!getinput("Enter your nickname :", Nickname, 1))
		return (0);
	if (!getinput("Enter your darkest secret :", DarkestSecret, 1))
		return (0);
	if (!getinput("Enter your phone number (for international numbers use \"00\" instead of \"+\") :", PhoneNumber, 2))
		return (0);
	return (1);
}
