/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:09:55 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/18 16:25:12 by toferrei         ###   ########.fr       */
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
#include <cmath>

class PmergeMe
{
	public :
		PmergeMe();
		~PmergeMe();
		PmergeMe(char **input);
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);

		void vectorSort(char **input);
		void dequeSort(char **input);

		class FoundNotNumber : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class FoundReapeatedNumber : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

	private :
		double _vTime;
		double _dqTime;
		std::vector<int> _vector;
		std::deque<int> _deque;

};

#endif