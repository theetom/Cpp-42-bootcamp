/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:56:09 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/30 17:17:49 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP

# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>
#include <utility>
#include <cstdlib>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(std::fstream *inputFile);
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &src);

		void comparator(std::fstream *inputFile, char *fileName) const;

		class FailedConvertion : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class InvalidInput : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class InvalidDate : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class InvalidValue : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

	private:
		std::map<int, float> _dataBase;

};

#endif