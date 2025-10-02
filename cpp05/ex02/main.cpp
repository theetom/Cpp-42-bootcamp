/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:50:49 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/02 13:25:25 by toferrei         ###   ########.fr       */
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

/* void bureaucratRoutine(int firstValue, int secondValue, Bureaucrat &Bureaucrat, AForm &Form)
{
	std::cout << Bureaucrat << "\n" << std::endl;
	std::cout << Form << "\n"  << std::endl;
	Bureaucrat.signForm(Form);
	std::cout << std::endl;
	try
	{
		while (Bureaucrat.getGrade() > firstValue)
		Bureaucrat.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << Bureaucrat << "\n" << std::endl;
	Bureaucrat.signForm(Form);	
	Bureaucrat.signForm(Form);
	std::cout << std::endl;
	Bureaucrat.executeForm(Form);
	try
	{
		while (Bureaucrat.getGrade() > secondValue)
			Bureaucrat.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << Bureaucrat << "\n" << std::endl;
	Bureaucrat.executeForm(Form);
	std::cout << Form << "\n"  << std::endl;



} */

int main()
{
	title();

	Bureaucrat Joao("Joao", 150);

	ShrubberyCreationForm FormShrub("My living Room");
	RobotomyRequestForm Form1("John");
	PresidentialPardonForm FormPres("John");
	
	ShrubberyCreationForm temp1;
	ShrubberyCreationForm temp2 = FormShrub;

	underTitle("-Shrubbery-");
	std::cout << Joao << "\n" << std::endl;
	std::cout << FormShrub << "\n"  << std::endl;
	Joao.signForm(FormShrub);
	std::cout << std::endl;
	try
	{
		while (Joao.getGrade() > 140)
		Joao.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << Joao << "\n" << std::endl;
	Joao.signForm(FormShrub);	
	Joao.signForm(FormShrub);
	std::cout << std::endl;
	Joao.executeForm(FormShrub);
	try
	{
		while (Joao.getGrade() > 135)
			Joao.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << Joao << "\n" << std::endl;
	Joao.executeForm(FormShrub);
	std::cout << FormShrub << "\n"  << std::endl;
	temp1 = FormShrub;
	Joao.signForm(temp1);
	Joao.signForm(temp2);

	RobotomyRequestForm temp3;
	RobotomyRequestForm temp4 = Form1;

	underTitle("-Lobotomy--");

	std::cout << Joao << "\n" << std::endl;
	std::cout << Form1 << "\n"  << std::endl;
	Joao.signForm(Form1);
	std::cout << std::endl;
	try
	{
		while (Joao.getGrade() > 70)
		Joao.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << Joao << "\n" << std::endl;
	Joao.signForm(Form1);	
	Joao.signForm(Form1);
	std::cout << std::endl;
	Joao.executeForm(Form1);
	try
	{
		while (Joao.getGrade() > 40)
			Joao.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << Joao << "\n" << std::endl;
	Joao.executeForm(Form1);
	std::cout << Form1 << "\n"  << std::endl;
	temp3 = Form1;
	Joao.signForm(temp3);
	Joao.signForm(temp4);

	underTitle("--Pardons--");

	PresidentialPardonForm temp5;
	PresidentialPardonForm temp6 = FormPres;
	std::cout << Joao << "\n" << std::endl;
	std::cout << FormPres << "\n"  << std::endl;
	Joao.signForm(FormPres);
	std::cout << std::endl;
	try
	{
		while (Joao.getGrade() > 20)
		Joao.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << Joao << "\n" << std::endl;
	Joao.signForm(FormPres);	
	Joao.signForm(FormPres);
	std::cout << std::endl;
	Joao.executeForm(FormPres);
	try
	{
		while (Joao.getGrade() > 1)
			Joao.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << Joao << "\n" << std::endl;
	Joao.executeForm(FormPres);
	std::cout << FormPres << "\n"  << std::endl;
	temp5 = FormPres;
	Joao.signForm(temp5);
	Joao.signForm(temp6);
}
