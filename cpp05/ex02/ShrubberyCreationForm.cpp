/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:50:32 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/02 13:12:17 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation Form", 145, 137),
												_target("default")
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): AForm(src), _target(src._target)
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
	{
		AForm::operator=(src);
		this->_target = src._target;
	}
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);

	std::string temp;
	temp = this->_target;
	temp += "_shrubbery";
	std::ofstream myFile(temp.c_str());
	temp.clear();
	if (myFile)
	{
		myFile << "              v .   ._, |_  .,\n"
				<< "           `-._\\/  .  \\ /    |/_\n"
				<< "               \\  _\\, y | \\//\n"
				<< "         _\\_.___\\, \\/ -.\\||\n"
				<< "           `7-,--.`._||  / / ,\n"
				<< "           /'     `-. `./ / |/_.'\n"
				<< "                     |    |//\n"
				<< "                     |_    /\n"
				<< "                     |-   |\n"
				<< "                     |   =|\n"
				<< "                     |    |\n"
				<< "--------------------/ ,  . \\--------._";
	}
}

std::ostream &operator<<( std::ostream &out, const ShrubberyCreationForm &src)
{
	out << "Form's name: " << src.getName() << "\n"
		<< "Has it been signed: ";
	if (src.getValidation())
		out << "yes";
	else
		out << "no";
	out << "\n"
		<< "Minimum signing level: " << src.getMinSignature() << ".\n"
		<< "Minimum execution level: " << src.getMinExecution() << ".\n";
	out << "Target: " << src.getTarget() << ".\n" << std::endl;
	return (out);
}
