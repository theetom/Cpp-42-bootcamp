/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:33:31 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/25 18:57:27 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		~Form();
		Form(std::string name, int minSignVal, int minExecVal);
		Form(const Form &src);
		Form &operator=(const Form &src);

		void beSigned(const Bureaucrat &bureaucrat);

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

	private:
		const std::string	_name;
		bool				_signed;
		const int			_signVal;
		const int			_execVal;
};

std::ostream &operator<<( std::ostream &out, const Form &src);

#endif