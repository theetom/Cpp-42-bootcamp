/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:43:08 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/02 13:14:53 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

		std::string getTarget() const;

		void execute(Bureaucrat const &executor) const;

	private:
		std::string _target;
};

std::ostream &operator<<( std::ostream &out, const RobotomyRequestForm &src);

#endif