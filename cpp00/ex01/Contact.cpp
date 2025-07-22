/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:35:45 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/22 12:54:58 by toferrei         ###   ########.fr       */
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

inline bool isNotAlphaOrSpace(char c)
{
	return !(isalpha(c) || (c == ' '));
}

inline bool isNotAlnumSpaceOrPunc(char c)
{
	return !(isalnum(c) || (c == ' ') || ispunct(c));
}

inline bool isNotDigitOrPlus(char c)
{
	return !(isdigit(c) || (c == '+'));
}

int Contact::isInputValid(std::string str, int flag)
{
	if (find_if(str.begin(), str.end(), isascii) == str.end())
		return (0);
	if ((flag == 1 && find_if(str.begin(), str.end(), isNotAlnumSpaceOrPunc) == str.end())
		|| (flag == 2 && find_if(str.begin(), str.end(), isNotDigitOrPlus) == str.end())
		|| (flag == 0 && find_if(str.begin(), str.end(), isNotAlphaOrSpace) == str.end()))
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
	if (!getinput("Enter your phone number :", PhoneNumber, 2))
		return (0);
	return (1);
}
