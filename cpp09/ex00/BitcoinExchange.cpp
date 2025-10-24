/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:00:14 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/24 17:10:04 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}

int datetoint(std::string date)
{
	date = date.substr();
	return (std::atoi(date.c_str()));
}

BitcoinExchange::BitcoinExchange(std::fstream *inputFile)
{
	std::string strtmp, date, btcValue;
	char *errCheck;
	int i = 0;
	while (getline(*inputFile, strtmp) && i < 2)
	{
		if (strtmp != "date,exchange_rate")
		{
			int key = std::atoi(date.c_str());
			float value = std::strtof(btcValue.c_str(), &errCheck);
			if (btcValue == errCheck)
				throw FailedConvertion();
			this->_dataBase.insert(std::make_pair(key, value));
			std::cout << errCheck << std::endl;
			std::cout << strtmp << std::endl;
		}
		i++;
	}
	

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src): _dataBase(src._dataBase)
{

}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
	if (this != &src)
	{
		this->_dataBase = src._dataBase;
	}
	return (*this);
}

const char *BitcoinExchange::FailedConvertion::what() const throw()
{
	return ("Error: Failed convertion");
}