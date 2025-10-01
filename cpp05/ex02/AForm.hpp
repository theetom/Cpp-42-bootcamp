/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:51:07 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/01 16:05:44 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP

# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		~AForm();
		AForm(std::string name, int minSignVal, int minExecVal);
		AForm(const AForm &src);
		AForm &operator=(const AForm &src);

		void beSigned(const Bureaucrat &bureaucrat);

		virtual void execute(Bureaucrat const & executor) const = 0;

		std::string getName() const;
		bool getValidation() const;
		int getMinSignature() const;
		int getMinExecution() const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class NotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		const std::string	_name;
		bool				_signed;
		const int			_signVal;
		const int			_execVal;
};

std::ostream &operator<<( std::ostream &out, const AForm &src);

#endif