/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:00:36 by etom              #+#    #+#             */
/*   Updated: 2025/07/11 13:51:39 by etom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <memory>
#include <iomanip>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "\n";
	
	std::cout << std::setfill (' ') << std::setw (15) << "string";
	std::cout << " " << &string << std::endl;
	std::cout << std::setfill (' ') << std::setw (15) << "stringPTR";
	std::cout << " " << &stringPTR << std::endl;
	std::cout << std::setfill (' ') << std::setw (15) << "stringREF";
	std::cout << " " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << std::setfill (' ') << std::setw (15) << "string";
	std::cout << " " << string << std::endl;
	std::cout << std::setfill (' ') << std::setw (15) << "stringPTR";
	std::cout << " " << stringPTR << std::endl;
	// std::cout << std::setfill (' ') << std::setw (15) << "*stringPTR";
	// std::cout << " " << *stringPTR << std::endl;
	std::cout << std::setfill (' ') << std::setw (15) << "stringREF";
	std::cout << " " << stringREF << std::endl;
}