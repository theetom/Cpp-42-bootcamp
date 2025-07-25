/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:43:55 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/25 10:18:57 by toferrei         ###   ########.fr       */
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
		Contact contactArray[8];
		int		contactsCount;

	public:

		PhoneBook();
		~PhoneBook();
		bool	add();
		void	moveAllUp();
		void	print();
		void	printHeader();

};

#endif