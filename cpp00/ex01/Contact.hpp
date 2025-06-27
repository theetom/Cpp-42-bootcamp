/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:38:34 by toferrei          #+#    #+#             */
/*   Updated: 2025/06/27 20:54:35 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:

		Contact();
		~Contact();

	private:

		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;

	

};

#endif