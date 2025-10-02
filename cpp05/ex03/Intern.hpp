/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:41:37 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/02 13:57:02 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;

class Intern
{
	public :
		Intern();
		~Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &src);

		AForm *makeForm(std::string formType, std::string target);

	private :
};

#endif