/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:38:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/21 14:39:44 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <stdlib.h>
# include <string>
# include <iostream>
# include <algorithm>
#include <iomanip>

class Contact
{
	public:

		Contact();
		~Contact();
		bool setContact();
		bool getinput(std::string promt, std::string &str, int flag);
		bool isInputValid(std::string str, int flag);
		void printContact(int index_num);
		void printContactFull();
		std::string printField(std::string str);

	private:

		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	DarkestSecret;
		std::string PhoneNumber;
};

#endif