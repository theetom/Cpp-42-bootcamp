/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:50:49 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/01 18:32:02 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	title();

	underTitle("----Ola");

	Bureaucrat Joao("Joao", 1);

	ShrubberyCreationForm FormShrub("My living Room");
	RobotomyRequestForm Form1("John");
	PresidentialPardonForm FormPres("John");
	

	Joao.signForm(Form1);
	Joao.signForm(FormShrub);
	Joao.signForm(FormPres);

	std::cout << Form1 << std::endl;

	Joao.executeForm(FormShrub);
	Joao.executeForm(Form1);
	Joao.executeForm(FormPres);

	
}
