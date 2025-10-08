/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeFinder.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:13:14 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/08 18:27:12 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarTypeConverter.hpp"

bool isSpecial(std::string str)
{
	if (str == "nan"|| str == "nanf"
	|| str == "+inf" || str == "+inff"
	|| str == "-inf" || str == "-inff")
		return 1;
	else
		return 0;
}

bool isChar(std::string str)
{
	if (std::isdigit(str[0]))
		return 0;
	return 1;
}

bool isInt(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (((str[i] == '-' || str[i] == '+') && i != 0)
		|| (!std::isdigit(str[i]) && i != 0))
		{
			return 0;
		}
	}
	return 1;
}

bool charFloat(char c)
{
	if (c == '-' || c == '+' || c == 'f' || c == '.')
		return 1;
	return 0;
}

bool isFloat(std::string str, int length)
{
	int point = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			point++;
		if (((str[i] == '-' || str[i] == '+') && i != 0)
		|| str[0] == '.'
		|| point > 1
		|| (i > 0 && str[i] == '.' && !std::isdigit(str[i - 1]) && !std::isdigit(str[i + 1]))
		|| (!isdigit(str[i]) && !charFloat(str[i]))
		|| (str[i] == 'f' && i != length - 1)
		|| (i == length - 1 && str[i] != 'f'))
			return 0;
	}
	return 1;
}

bool charDouble(char c)
{
	if (c == '-' || c == '+' || c == '.')
		return 1;
	return 0;
}

bool isDouble(std::string str)
{
	int point = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			point++;
		if (((str[i] == '-' || str[i] == '+') && i != 0)
		|| str[0] == '.'
		|| point > 1
		|| (i > 0 && str[i] == '.' && !std::isdigit(str[i - 1]) && !std::isdigit(str[i + 1]))
		|| (!isdigit(str[i]) && !charDouble(str[i])))
			return 0;
	}
	return 1;
}

e_Type whatType(std::string str, int length)
{
	if (isSpecial(str))
		return SPECIAL;
	else if (length == 1 && isChar(str))
		return CHAR;
	else if(isInt(str))
		return INT;
	else if (isFloat(str, length))
		return FLOAT;
	else if (isDouble(str))
		return DOUBLE;
	else
		return INVALID;
}
