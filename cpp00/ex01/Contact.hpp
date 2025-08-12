/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:38:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/12 16:42:23 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <stdlib.h>
# include <string>
# include <iostream>
#include <iomanip>

class Contact
{
	private:
		
		std::string printField(std::string str);
		bool getinput(std::string promt, std::string &str, int flag);
		int isInputInvalid(std::string str, int flag);
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_darkestSecret;
		std::string _phoneNumber;

	public:

		Contact();
		~Contact();
		bool setContact();
		void printContact(int index_num);
		void printContactFull();

};

#endif