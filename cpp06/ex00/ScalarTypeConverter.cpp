/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarTypeConverter.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:29:52 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/08 18:24:47 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarTypeConverter.hpp"
#include <cstring>
#include <cstdlib>

ScalarTypeConverter::ScalarTypeConverter()
{

}


ScalarTypeConverter::~ScalarTypeConverter()
{

}

ScalarTypeConverter::ScalarTypeConverter(const ScalarTypeConverter &src)
{
	*this = src;
}

ScalarTypeConverter &ScalarTypeConverter::operator=(const ScalarTypeConverter &src)
{
	(void)src;
	return (*this);
}

void ScalarTypeConverter::convert(const std::string &str)
{
	e_Type type = whatType(str, strlen(str.c_str()));
	float i = strtof(str.c_str(), NULL);
	std::cout << i;
	switch (type)
	{
		case 0:
		{
			convertSpecial(str);
			return ;
		}
		case 1:
		{
			convertChar(str);
			return ;
		}
		case 2:
		{
			convertInt(str);
			return ;
		}
		case 3:
		{
			convertFloat(str);
			return ;
		}
		case 4:
		{
			convertDouble(str);
			return ;
		}
		default :
			throw(ScalarTypeConverter::InvalidInput());
	}
}

const char *ScalarTypeConverter::InvalidInput::what() const throw()
{
	return ("Invalid Input");
}

const char *ScalarTypeConverter::NotDisplayable::what() const throw()
{
	return ("Un-displayable Input");
}
