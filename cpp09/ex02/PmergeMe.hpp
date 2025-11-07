/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:09:55 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/07 10:13:29 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP

#define PMERGEME_HPP

#include <iostream>
#include <list>
#include <vector>
#include <list>
#include <exception>
#include <cstdlib>
#include <sys/time.h>
#include <bits/stdc++.h>

class PmergeMe
{
	public :
		PmergeMe();
		~PmergeMe();
		PmergeMe(char **input);
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);

		void vectorSort(char **input);
		void listSort(char **input);

		class InvalidInput : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

	private :
		double _vTime;
		double _lTime;
		std::vector<int> _vector;
		std::list<int> _list;

};

#endif