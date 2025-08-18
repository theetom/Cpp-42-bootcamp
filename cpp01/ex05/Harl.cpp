/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:17:40 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/18 18:26:44 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::_debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::_info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::_error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::_defaultComplain()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptr[5])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error, &Harl::_defaultComplain};

	while (i < 4 && s[i].compare(level) != 0)
		i++;
	(this->*ptr[i])();



	
/* 	// Another possible solution
	// (not used cause it felt like cheating since exercice asked for no if trees and this is basically a bunch of ifs)

	void (Harl::*ptr)();
	ptr = &Harl::defaultComplain;

	(!level.compare("DEBUG") && (ptr = &Harl::debug));
	(!level.compare("INFO") && (ptr = &Harl::info));
	(!level.compare("WARNING") && (ptr = &Harl::warning));
	(!level.compare("ERROR") && (ptr = &Harl::error)); 
	(this->*ptr)();
	
*/


	





}