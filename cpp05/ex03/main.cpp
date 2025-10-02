/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:50:49 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/02 14:25:33 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void textWithDashes(std::string text)
{
	std::cout << std::left
				<< std::setw(20) << std::setfill('-') << "-"
				<< std::setw(20) << std::setfill('-') << text
				<< std::setw(11) << std::setfill('-') << "-"
				<< std::endl;
}

void title()
{
	std::cout << std::endl;
	textWithDashes("===========");
	textWithDashes("More Forms-");
	textWithDashes("===========");
	std::cout << std::endl;
}

void underTitle(std::string text)
{
	std::cout << std::endl;
	textWithDashes(text);
	std::cout << std::endl;
}

int main()
{
	int i = 0;
	title();
	Intern someIntern;
	Bureaucrat Joao("Joao", 1);
	AForm *form;
	std::string forms[] = {"shrubbery request", "robotomy request", "presidential pardon request", "some pardon request"};

	while (i < 4)
	{
		form = someIntern.makeForm(forms[i], "john");
		if (form != NULL)
		{
			Joao.signForm(*form);
			Joao.executeForm(*form);
			delete form;
		}
		std::cout << std::endl;
		i++;
	}
	
}
