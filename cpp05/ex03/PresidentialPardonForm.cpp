/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:24:16 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/02 14:10:32 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Pardon Form", 25, 5),
												_target("default")
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon Form", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): AForm(src), _target(src._target)
{

}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this != &src)
	{
		AForm::operator=(src);
		this->_target = src._target;
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::ostream &operator<<( std::ostream &out, const PresidentialPardonForm &src)
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
