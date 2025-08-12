/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:43:55 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/12 16:43:22 by toferrei         ###   ########.fr       */
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
		Contact	contactArray[8];
		int		contactsCount;
		void	moveAllUp();
		void	printHeader();

	public:

		PhoneBook();
		~PhoneBook();
		bool	add();
		void	print();

};

#endif