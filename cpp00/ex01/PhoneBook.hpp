/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:43:55 by toferrei          #+#    #+#             */
/*   Updated: 2025/07/01 17:32:54 by toferrei         ###   ########.fr       */
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
		Contact contact_array[8];
		int		index;

	public:

		PhoneBook();
		~PhoneBook();
		bool	add();
		void	move_all_up();
		void	print();

};

#endif