/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:35:45 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/14 12:39:36 by toferrei         ###   ########.fr       */
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
	std::cout << "First Name:" << _firstName << std::endl;
	std::cout << "Last Name:" << _lastName << std::endl;
	std::cout << "Nickname:" << _nickname << std::endl;
	std::cout << "Phone number:" << _phoneNumber << std::endl;
	std::cout << "Darkest Secret:" << _darkestSecret << std::endl;
}

std::string Contact::_printField(std::string str)
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
	if (_firstName.empty())
		return ;
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << ++indexNum;
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << _printField(_firstName);
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << _printField(_lastName);
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (10);
	std::cout << _printField(_nickname);
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

int Contact::_isInputInvalid(std::string str, int flag) // returns 0 for valid
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

bool Contact::_getinput(std::string prompt, std::string &str, int flag)
{
	std::string buf;

	while (std::cin && buf.compare("RETURN"))
	{
		std::cout << prompt;
		getline(std::cin, buf);
		if (!buf.empty() && !_isInputInvalid(buf, flag) && buf.compare("RETURN"))
		{
			str = buf;
			return (1);
		}
		else if (!buf.empty() && _isInputInvalid(buf, flag) == 1)
			std::cout << "Invalid input: only unaccented characters and space." << std::endl;
		else if (!buf.empty() && _isInputInvalid(buf, flag) == 2)
			std::cout << "Invalid input: only unaccented characters, space, numbers and punctuation." << std::endl;
		else if (!buf.empty() && _isInputInvalid(buf, flag) == 3)
			std::cout << "Invalid input: only numbers and '+'." << std::endl;
		else if (buf.empty())
			std::cout << "Invalid input: no empty input." << std::endl;
	}
	return (0);
}

bool Contact::setContact()
{
	if (!_getinput("Enter your first name :", _firstName, 1))
		return (0);
	if (!_getinput("Enter your last name :", _lastName, 1))
		return (0);
	if (!_getinput("Enter your nickname :", _nickname, 2))
		return (0);
	if (!_getinput("Enter your darkest secret :", _darkestSecret, 2))
		return (0);
	if (!_getinput("Enter your phone number :", _phoneNumber, 3))
		return (0);
	return (1);
}
