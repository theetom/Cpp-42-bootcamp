/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarTypeConverter.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:30:18 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/25 15:54:25 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARTYPECONVERTER_HPP

# define SCALARTYPECONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <climits>

enum e_Type
{
	INVALID = -1,
	SPECIAL = 0,
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4
};

class ScalarTypeConverter
{
	private:
		ScalarTypeConverter();
		~ScalarTypeConverter();
		ScalarTypeConverter(const ScalarTypeConverter &src);
		ScalarTypeConverter &operator=(const ScalarTypeConverter &src);

	public:
		static void convert(const std::string &str);

		class InvalidInput : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

e_Type whatType(std::string str, int length);
void convertSpecial(std::string str);
void convertChar(char c);
void convertInt(std::string str);
void convertFloat(std::string str);
void convertDouble(std::string str);

#endif