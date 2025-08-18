/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:43:55 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/14 12:39:12 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <stdlib.h>
# include <iomanip>

class PhoneBook
{
	private:
		Contact	_contactArray[8];
		int		_contactsCount;
		void	_moveAllUp();
		void	_printHeader();

	public:

		PhoneBook();
		~PhoneBook();
		bool	add();
		void	print();

};

#endif