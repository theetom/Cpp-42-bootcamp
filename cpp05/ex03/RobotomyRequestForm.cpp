/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:42:42 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/02 13:10:41 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request Form", 72, 45),
												_target("default")
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request Form", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): AForm(src), _target(src._target)
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
	{
		AForm::operator=(src);
		this->_target = src._target;
	}
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);

	std::srand((unsigned)(time(NULL)));
	std::cout << "Makes some drilling noises..." << std::endl;
	if (std::rand() < RAND_MAX / 2)
	{
		std::cout << "It was a succesfull lobotomy!!" << std::endl;
	}
	else
	{
		std::cout << "Apparently making holes in someone's brain is too much..." << std::endl;
	}
}

std::ostream &operator<<( std::ostream &out, const RobotomyRequestForm &src)
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
