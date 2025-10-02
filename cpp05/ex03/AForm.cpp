/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:33:23 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/02 14:23:51 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():_name("default"),
			_signed(false),
			_signVal(150),
			_execVal(150)
{

}

AForm::~AForm()
{

}

AForm::AForm(std::string name, int minSignVal, int minExecVal):_name(name),
															_signed(false),
															_signVal(minSignVal),
															_execVal(minExecVal)
{
	if (minSignVal > 150)
		throw AForm::GradeTooLowException();
	else if (minSignVal < 1)
		throw AForm::GradeTooHighException();
	if (minExecVal > 150)
		throw AForm::GradeTooLowException();
	else if (minExecVal < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &src):_name(src.getName()),
							_signed(src.getValidation()),
							_signVal(src.getMinSignature()),
							_execVal(src.getMinExecution())
{

}

AForm &AForm::operator=(const AForm &src)
{
	if (this != &src)
	{
		this->_signed = src.getValidation();
	}
	return (*this);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->getMinSignature() < bureaucrat.getGrade())
	{
		throw AForm::GradeTooLowException();
	}
	else if (this->getValidation())
		throw AForm::AlreadySignedException();
	else
		this->_signed = true;
}

std::string AForm::getName() const
{
	return(this->_name);
}

bool AForm::getValidation() const
{
	return (this->_signed);
}

int AForm::getMinSignature() const
{
	return (this->_signVal);
}

int AForm::getMinExecution() const
{
	return (this->_execVal);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char *AForm::AlreadySignedException::what() const throw()
{
	return ("Already signed!");
}

const char *AForm::NotSignedException::what() const throw()
{
	return ("Not signed!");
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!this->getValidation())
			throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getMinExecution())
			throw AForm::GradeTooLowException();
}

std::ostream &operator<<( std::ostream &out, const AForm &src)
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
