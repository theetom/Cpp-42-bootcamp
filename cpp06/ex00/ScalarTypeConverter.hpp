/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarTypeConverter.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:30:18 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/06 16:24:57 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARTYPECONVERTER_HPP

# define SCALARTYPECONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <typeinfo>

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

};

#endif