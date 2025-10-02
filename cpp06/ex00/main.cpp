/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:00:51 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/02 16:03:25 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarTypeConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please enter a char/ int/ float/ double value\n";
		return (0);
	}

	ScalarTypeConverter::convert(argv[1]);

	return (0);
}