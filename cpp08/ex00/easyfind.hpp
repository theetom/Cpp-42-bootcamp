/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:14:29 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/21 11:53:52 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

# define EASYFIND_HPP

#include <exception>
#include <algorithm>
#include <iostream>

class InstanceNotFound: public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Instance not found");
		}
};


template <typename T>
typename T::iterator easyfind(T &arr, int i)
{
	typename T::iterator it;

	it = find(arr.begin(), arr.end(), i);
	if (it == arr.end())
		throw InstanceNotFound();
	return (it);
}

#endif



