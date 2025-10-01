/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:33:23 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/01 14:29:01 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_name("default"),
			_signed(false),
			_signVal(150),
			_execVal(150)
{

}

Form::~Form()
{

}

Form::Form(std::string name, int minSignVal, int minExecVal):_name(name),
															_signed(false),
															_signVal(minSignVal),
															_execVal(minExecVal)
{
	if (minSignVal > 150)
		throw Form::GradeTooLowException();
	else if (minSignVal < 1)
		throw Form::GradeTooHighException();
	if (minExecVal > 150)
		throw Form::GradeTooLowException();
	else if (minExecVal < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &src):_name(src.getName()),
							_signed(src.getValidation()),
							_signVal(src.getMinSignature()),
							_execVal(src.getMinExecution())
{

}

Form &Form::operator=(const Form &src)
{
	if (this != &src)
	{
		this->_signed = src.getValidation();
	}
	return (*this);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->getMinSignature() < bureaucrat.getGrade())
	{
		throw Form::GradeTooLowException();
	}
	else if (this->getValidation())
		throw Form::AlreadySignedException();
	else
		this->_signed = true;
}

std::string Form::getName() const
{
	return(this->_name);
}

bool Form::getValidation() const
{
	return (this->_signed);
}

int Form::getMinSignature() const
{
	return (this->_signVal);
}

int Form::getMinExecution() const
{
	return (this->_execVal);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char *Form::AlreadySignedException::what() const throw()
{
	return ("Already signed!");
}

std::ostream &operator<<( std::ostream &out, const Form &src)
{
	out << "Form's name: " << src.getName() << "\n"
		<< "Has it been signed: ";
	if (src.getValidation())
		out << "yes";
	else
		out << "no";
	out << "\n"
		<< "Minimum signing level: " << src.getMinSignature() << ".\n"
		<< "Minimum execution level: " << src.getMinExecution() << ".";
	return (out);
}
