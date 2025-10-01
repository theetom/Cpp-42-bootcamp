/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:42:42 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/01 18:29:12 by toferrei         ###   ########.fr       */
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
