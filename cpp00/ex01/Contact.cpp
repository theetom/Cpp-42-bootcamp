/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:35:45 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/21 15:24:22 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::printContactFull()
{
	std::cout << "First Name:" << FirstName << std::endl;
	std::cout << "Last Name:" << LastName << std::endl;
	std::cout << "Nickname:" << Nickname << std::endl;
	std::cout << "Phone number:" << PhoneNumber << std::endl;
	std::cout << "Darkest Secret:" << DarkestSecret << std::endl;
}

std::string Contact::printField(std::string str)
{
	std::string temp = str;
	if (str.size() > 10)
	{
		temp = temp.substr(0, 9);
		temp += ".";
	}
	return(temp);
}

void Contact::printContact(int index_num)
{
	if (FirstName.empty())
		return ;
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << ++index_num;
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << printField(FirstName);
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << printField(LastName);
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << printField(Nickname);
	std::cout << "|";
	std::cout << std::endl;
}

inline bool isNotAlpha(char c)
{
	return !(isalpha(c) || (c == ' '));
}

inline bool isNotAlnumOrPunc(char c)
{
	return !(isalnum(c) || (c == ' ') || ispunct(c));
}

static inline bool isNotDigit(char c)
{
	return !(isdigit(c));
}

bool Contact::isInputValid(std::string str, int flag)
{
	if (find_if(str.begin(), str.end(), isascii) == str.end())
		return (0);
	if ((flag == 1 && find_if(str.begin(), str.end(), isNotAlnumOrPunc) == str.end())
		|| (flag == 2 && find_if(str.begin(), str.end(), isNotDigit) == str.end())
		|| (flag == 0 && find_if(str.begin(), str.end(), isNotAlpha) == str.end()))
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
		if (!buf.empty() && isInputValid(buf, flag) && buf.compare("RETURN"))
		{
			str = buf;
			return (1);
		}
		else if (!isInputValid(buf, flag))
			std::cout << "Invalid input: no empty input or try without accentuated characters" << std::endl;
	}
	return (0);
}

bool Contact::setContact()
{
	if (!getinput("Enter your first name :", FirstName, 0))
		return (0);
	if (!getinput("Enter your last name :", LastName, 0))
		return (0);
	if (!getinput("Enter your nickname :", Nickname, 1))
		return (0);
	if (!getinput("Enter your darkest secret :", DarkestSecret, 1))
		return (0);
	if (!getinput("Enter your phone number (for international numbers use \"00\" instead of \"+\") :", PhoneNumber, 2))
		return (0);
	return (1);
}
