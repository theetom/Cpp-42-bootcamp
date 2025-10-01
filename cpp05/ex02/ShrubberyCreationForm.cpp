/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:50:32 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/01 17:40:54 by toferrei         ###   ########.fr       */
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

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);

	std::string temp;
	temp = this->_target;
	temp += "_shrubbery";
	std::ofstream myFile(temp.c_str());
	temp.clear();
	std::ifstream Tree;
	Tree.open("Tree");
	if (myFile && Tree)
	{
		while (getline(Tree, temp))
		{
			myFile << temp << "\n";
		}
		myFile << std::endl;
	}
}
