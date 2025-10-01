/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:24:21 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/01 18:25:45 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

		void execute(Bureaucrat const &executor) const;

	private:
		std::string _target;
};

#endif