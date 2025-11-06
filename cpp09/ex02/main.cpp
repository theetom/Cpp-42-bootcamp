/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:07:39 by toferrei          #+#    #+#             */
/*   Updated: 2025/11/06 16:34:27 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc <= 2)
		return (std::cout << "Wrong Number of Arguments" << std::endl, 1);
	try
	{
		argv++;
		PmergeMe merger(argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
