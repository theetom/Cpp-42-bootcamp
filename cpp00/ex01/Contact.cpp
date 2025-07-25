/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:35:45 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/25 10:18:42 by toferrei         ###   ########.fr       */
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
	std::cout << "First Name:" << firstName << std::endl;
	std::cout << "Last Name:" << lastName << std::endl;
	std::cout << "Nickname:" << nickname << std::endl;
	std::cout << "Phone number:" << phoneNumber << std::endl;
	std::cout << "Darkest Secret:" << darkestSecret << std::endl;
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

void Contact::printContact(int indexNum)
{
	if (firstName.empty())
		return ;
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << ++indexNum;
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << printField(firstName);
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << printField(lastName);
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << printField(nickname);
	std::cout << "|";
	std::cout << std::endl;
}

inline bool isNotAlphaOrSpace(char c)
{
	return !(isalpha(c) || (c == ' '));
}

inline bool isNotAlnumSpaceOrPunc(char c)
{
	return !(isalnum(c) || (c == ' ') || (c == '!') || (c == ',') || (c == '.'));
}

inline bool isNotDigitOrPlus(char c)
{
	return !(isdigit(c) || (c == '+'));
}

int Contact::isInputInvalid(std::string str, int flag) // returns 0 for valid
{
	/* if (find_if(str.begin(), str.end(), isascii) == str.end())
		return (0);
	if ((flag == 1 && find_if(str.begin(), str.end(), isNotAlnumSpaceOrPunc) == str.end())
		|| (flag == 2 && find_if(str.begin(), str.end(), isNotDigitOrPlus) == str.end())
		|| (flag == 0 && find_if(str.begin(), str.end(), isNotAlphaOrSpace) == str.end()))
		return (1);
	return (0); */ // not possible solution because of need for <algorithm>
	int n = 0;
	while (str[n])
	{
		if (flag == 1 && isNotAlphaOrSpace(str[n]))
			return (1);
		if (flag == 2 && isNotAlnumSpaceOrPunc(str[n]))
			return (2);
		if (flag == 3 && isNotDigitOrPlus(str[n]))
			return (3);
		n++;
	}
	return (0);
}

bool Contact::getinput(std::string prompt, std::string &str, int flag)
{
	std::string buf;

	while (std::cin && buf.compare("RETURN"))
	{
		std::cout << prompt;
		getline(std::cin, buf);
		if (!buf.empty() && !isInputInvalid(buf, flag) && buf.compare("RETURN"))
		{
			str = buf;
			return (1);
		}
		else if (!buf.empty() && isInputInvalid(buf, flag) == 1)
			std::cout << "Invalid input: only unaccented characters and space." << std::endl;
		else if (!buf.empty() && isInputInvalid(buf, flag) == 2)
			std::cout << "Invalid input: only unaccented characters, space, numbers and punctuation." << std::endl;
		else if (!buf.empty() && isInputInvalid(buf, flag) == 3)
			std::cout << "Invalid input: only numbers and '+'." << std::endl;
		else if (buf.empty())
			std::cout << "Invalid input: no empty input." << std::endl;
	}
	return (0);
}

bool Contact::setContact()
{
	if (!getinput("Enter your first name :", firstName, 1))
		return (0);
	if (!getinput("Enter your last name :", lastName, 1))
		return (0);
	if (!getinput("Enter your nickname :", nickname, 2))
		return (0);
	if (!getinput("Enter your darkest secret :", darkestSecret, 2))
		return (0);
	if (!getinput("Enter your phone number :", phoneNumber, 3))
		return (0);
	return (1);
}
