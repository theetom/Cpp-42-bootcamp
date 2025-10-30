/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:55:24 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/30 17:08:37 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{

	
	if (argc == 2 )
	{
		std::fstream dB, inputFile;
		dB.open("data.csv");
		if (!dB.is_open())
		{
			std::cerr << "Error: CSV file not found" << std::endl;
			return (1);
		}
		try
		{
			BitcoinExchange bitcoin(&dB);

			inputFile.open(argv[1]);
			if (!inputFile.is_open())
			{
				std::cerr << "Error: Input file not found" << std::endl;
				return (1);
			}
			bitcoin.comparator(&inputFile, argv[1]);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		




		return (0);
	}
	std::cerr << "Error: Wrong number of arguments" << std::endl;
	return (1);
}