/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:50:54 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/20 15:04:38 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <iomanip>

#include "AForm.hpp"

class AForm;

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

		void signForm(AForm &form);
		void executeForm(AForm const &form);

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
