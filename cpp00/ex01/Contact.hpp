/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:38:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/01 18:22:46 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <stdlib.h>
# include <string>
# include <iostream>
# include <algorithm>

class Contact
{
	public:

		Contact();
		~Contact();
		bool setcontact();
		bool getinput(std::string promt, std::string &str, int flag);
		bool is_input_valid(std::string str, int flag);
		void print_contact(int index_num);
		void print_contact_full();
		std::string print_field(std::string str);

	private:

		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	DarkestSecret;
		std::string PhoneNumber;
};

#endif