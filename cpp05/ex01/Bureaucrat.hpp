/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:32:37 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/25 18:57:05 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <iomanip>

#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &src);
		~Bureaucrat();

		void increaseGrade();
		void decreaseGrade();

		void signForm(Form &form);

		std::string getName() const;
		int getGrade() const;
		// void setGrade(int newGrade);

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
		
	private:
		const std::string _name;
		int _grade;
	};
	
std::ostream &operator<<( std::ostream &out, const Bureaucrat &src);

#endif
