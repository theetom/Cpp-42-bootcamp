/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:32:41 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/01 15:17:29 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	textWithDashes("Bureaucracy");
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

	{
		underTitle("==Alberto==");

		Bureaucrat Alberto;

		std::cout << "\n" << Alberto << "\n" << std::endl;
	}
	{
		underTitle("=Fransisco=");

		Bureaucrat Fransisco("Fransisco", 75);
		Bureaucrat Alberto("Alberto", 150);

		std::cout << "\n" << Fransisco << "\n" << std::endl;

		Fransisco = Alberto;

		std::cout << "\n" << Fransisco << "\n" << std::endl;
	}
	underTitle("==Joaquim==");
	try
	{
		Bureaucrat Joaquim("Joaquim", 0);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Joaquim("Joaquim", 151);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	{
		Bureaucrat Joaquim("Joaquim", 140);
		try
		{
			while (1)
			{
				Joaquim.decreaseGrade();/* code */
				std::cout << Joaquim << std::endl;
			}
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat Joaquim("Joaquim", 10);
			while (1)
			{
				Joaquim.increaseGrade();
				std::cout << Joaquim << std::endl;
			}
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	underTitle("===Forms===");
	{
		try
		{
			Form test1("Intergalactic Highway 321", 0, 42);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Form test1("Intergalactic Highway 321", 151, 42);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Form test1("Intergalactic Highway 321", 42, 0);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Form test1("Intergalactic Highway 321", 42, 151);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	Bureaucrat Joana("Joana", 25);
	Bureaucrat Joao("Joao", 45);
	Form test1("Intergalactic Highway 321", 30, 30);

	std::cout << test1 << std::endl;

	Form test2(test1);
	std::cout << test2 << std::endl;

	try
	{
		Joana.signForm(test1);
		test1.beSigned(Joana);
		Joao.signForm(test2);
		test1.beSigned(Joao);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Joao.signForm(test2);
		test1.beSigned(Joao);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		test1.beSigned(Joao);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
