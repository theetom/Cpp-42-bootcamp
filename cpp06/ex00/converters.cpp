/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:12:57 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/09 18:22:48 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarTypeConverter.hpp"
#include <climits>

void convertSpecial(std::string str)
{
	if (str == "nan" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl; 
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

void convertChar(char c)
{
	std::cout << "char : ";
	if (!isprint(c))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "\'" << c <<"\'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) <<".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) <<".0" << std::endl;
}

void convertInt(std::string str)
{
	long i = atol(str.c_str());

	if (i >= INT_MIN && i <= INT_MAX)
	{
		if (i >= CHAR_MIN && i <= CHAR_MAX)
		{
			std::cout << "char : ";
			if (isprint(static_cast<char>(i)))
			{
				std::cout << "\'" << static_cast<unsigned char>(i) <<"\'" << std::endl;
			}
			else
			std::cout << "Non displayable" << std::endl;	
		}
		else
			std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<float>(i) <<".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) <<".0" << std::endl;
	}
	else
		throw ScalarTypeConverter::InvalidInput();
}

int gettingDecimals(std::string str)
{
	std::size_t found = str.find('.'); 

	std::cout << (str.substr(found + 1)).c_str();
	if (found != std::string::npos)
	{
		return (atol((str.substr(found + 1)).c_str()));
	}
	else
		return 0;
}

void convertFloat(std::string str)
{
	float f = strtof(str.c_str(), NULL);

	std::cout << str;

	int i = gettingDecimals(str);
	(void)i;

	if (f >= CHAR_MIN && f <= CHAR_MAX)
	{
		std::cout << "char : ";
		if (isprint(static_cast<char>(f)))
		{
			std::cout << "\'" << static_cast<unsigned char>(f) <<"\'" << std::endl;
		}
		else
		std::cout << "Non displayable" << std::endl;	
	}
	else
		std::cout << "char: impossible" << std::endl;
	if (static_cast<int>(f) >= INT_MIN && static_cast<int>(f) <= INT_MAX)
	{
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	}
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<int>(f) << "." << i << "f" << std::endl;
}

void convertDouble(std::string str)
{
	(void)str;
}