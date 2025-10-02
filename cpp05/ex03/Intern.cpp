/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:41:11 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/02 14:13:56 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::~Intern()
{

}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

AForm *Intern::makeForm(std::string formType, std::string target)
{
	int i = 0;
	std::string forms[] = {"shrubbery request", "robotomy request", "presidential pardon request"};
	while (i < 3 && formType != forms[i])
		i++;
	switch (i)
	{
	case 0:
		std::cout << "Intern created " << formType << std::endl;
		return (new ShrubberyCreationForm(target));
	case 1:
		std::cout << "Intern created " << formType << std::endl;
		return (new RobotomyRequestForm(target));
	case 2:
		std::cout << "Intern created " << formType << std::endl;
		return (new PresidentialPardonForm (target));
	default:
		std::cout << "Form does not exist" << std::endl;
		return (NULL);
	}
	
}