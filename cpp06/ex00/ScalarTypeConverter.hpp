/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarTypeConverter.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:30:18 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/02 15:37:55 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARTYPECONVERTER_HPP

# define SCALARTYPECONVERTER_HPP

#include <iostream>

class ScalarTypeConverter
{
	private:
		ScalarTypeConverter();
		~ScalarTypeConverter();
		ScalarTypeConverter();
		ScalarTypeConverter(const ScalarTypeConverter &src);
		ScalarTypeConverter &operator=(const ScalarTypeConverter &src);

	public:
		static void convert(const std::string &str);

};

#endif