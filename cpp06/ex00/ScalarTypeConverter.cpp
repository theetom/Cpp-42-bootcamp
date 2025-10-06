/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarTypeConverter.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:29:52 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/06 17:32:36 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarTypeConverter.hpp"
#include <cstring>

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

e_Type whatType(std::string)
{
	
}

void ScalarTypeConverter::convert(const std::string &str)
{
	e_Type type = whatType(str);
	std::cout << str;

	return ;
}
