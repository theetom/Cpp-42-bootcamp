/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:09:55 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/04 16:49:39 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP

#define PMERGEME_HPP

#include <iostream>
#include <list>
#include <vector>
#include <exception>

class PmergeMe
{
	public :
		PmergeMe();
		~PmergeMe();
		PmergeMe(char **input);
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);

		class InvalidInput : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

	private :
		std::vector<u_int16_t>

};

#endif