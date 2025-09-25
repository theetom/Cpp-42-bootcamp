/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:33:31 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/25 11:39:38 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

#include <iostream>

class Form
{
	public:
		Form();
		~Form();
		Form(std::string name, int minSignVal, int minExecVal);
		Form(const Form &copy);
		Form &operator=(const Form &src);

	private:
};

#endif