/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:00:14 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/30 17:40:22 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

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

std::string cleanInput(std::string input, char c)
{
	for (std::string::iterator it = input.begin(); it < input.end(); it++)
	{
		if (*it == c)
		{
			input.erase(it);
			it--;
		}
	}
	return (input);
}

int datetoint(std::string date)
{
	date = cleanInput(date, '-');
	return (std::atoi(date.c_str()));
}

BitcoinExchange::BitcoinExchange(std::fstream *inputFile)
{
	std::string strtmp, btcValue;
	float value;
	char *errCheck;
	int key;
	while (std::getline(*inputFile, strtmp))
	{
		if (strtmp != "date,exchange_rate")
		{
			key = datetoint(strtmp.substr(0, strtmp.find(",")));
			btcValue = strtmp.substr(strtmp.find(",") + 1);
			value = std::strtof(btcValue.c_str(), &errCheck);
			if (btcValue == errCheck)
				throw FailedConvertion();
			this->_dataBase.insert(std::make_pair(key, value));
		}
	}
}

void isInputValid(std::string input)
{

}

void isDateValid(std::string date)
{
	// size_t year, month, day;
	(void) date;

}

void isValueValid()
{

}

void BitcoinExchange::comparator(std::fstream *inputFile, char *fileName) const
{
	std::string strtmp;
	int i = 0;
	while (std::getline(*inputFile, strtmp))
	{
		if (strtmp != "date | value")
		{
			try
			{
				strtmp = cleanInput(strtmp, ' ');
				isInputValid(strtmp);
				std::cout << "ola" << std::endl;
				isDateValid(strtmp);
				isValueValid();
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
				std::cout << "In file " << fileName << "line " << i << std::endl;
			}
		}
		i++;
	}
}

const char *BitcoinExchange::FailedConvertion::what() const throw()
{
	return ("Error: Failed convertion");
}

const char *BitcoinExchange::InvalidInput::what() const throw()
{
	return ("Error: Invalid input");
}

const char *BitcoinExchange::InvalidDate::what() const throw()
{
	return ("Error: Invalid date");
}

const char *BitcoinExchange::InvalidValue::what() const throw()
{
	return ("Error: Invalid Value");
}