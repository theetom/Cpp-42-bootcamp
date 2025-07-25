/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:38:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/25 10:18:45 by toferrei         ###   ########.fr       */
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