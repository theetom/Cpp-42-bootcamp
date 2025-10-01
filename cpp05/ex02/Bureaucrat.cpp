/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:51:00 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/01 17:33:35 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"),
						_grade(150)
{
	std::cout << "Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)//,
														//_grade(grade)
{
	std::cout << "Name and Grade Constructor" << std::endl;
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name),
												_grade(copy._grade)
{
	std::cout << "Copy Constructor" << std::endl;

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Overload assignement operator" << std::endl;

	if (this != &src)
	{
		// this->_name = src._name; doesnt make sense because const name
		this->_grade = src._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Destructor for "
			<< this->getName()
			<< std::endl;

}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::increaseGrade()
{
	if (this->getGrade() == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decreaseGrade()
{
	if (this->getGrade() == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::signForm(AForm &Form)
{
	try
	{
		Form.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->getName()
				<< " couldn't sign "
				<< Form.getName()
				<< " because "
				<< e.what()
				<< "." << std::endl;
		return ;
	}
	std::cout << this->getName()
			<< " signed "
			<< Form.getName()
			<< "." << std::endl;
}

void Bureaucrat::executeForm(AForm const &AForm)
{
	try
	{
		AForm.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return ;
	}
	std::cout << this->getName()
			<< " executed "
			<< AForm.getName()
			<< "." << std::endl;
	
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream &operator<<( std::ostream& out, const Bureaucrat &src)
{
	out << src.getName()
		<< ", bureaucrat grade "
		<< src.getGrade();
	return (out);
}
