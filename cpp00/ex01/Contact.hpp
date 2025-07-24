/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei42@student.42lisboa.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:38:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/24 14:38:13 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <stdlib.h>
# include <string>
# include <iostream>
// # include <algorithm>
#include <iomanip>

class Contact
{
	public:

		Contact();
		~Contact();
		bool setContact();
		bool getinput(std::string promt, std::string &str, int flag);
		int isInputInvalid(std::string str, int flag);
		void printContact(int index_num);
		void printContactFull();
		std::string printField(std::string str);

	private:

		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	darkestSecret;
		std::string phoneNumber;
};

#endif