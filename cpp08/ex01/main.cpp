/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:10:29 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/23 13:13:53 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <unistd.h>
#include <sys/time.h>

unsigned int hash3(unsigned int h1, unsigned int h2, unsigned int h3)
{
    return (((h1 * 2654435789U) + h2) * 2654435789U) + h3;
}

int main()
{
	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	// for (unsigned int i = 0; i < sp.getArray().size(); i++)
	// {
	// 	std::cout << sp.getArray().at(i) << std::endl;
	// }

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	struct timeval time;
	gettimeofday(&time, NULL);
	srand(hash3(time.tv_sec, time.tv_usec, getpid()));
	std::vector<int> tmp;
	Span test(100000);
	try
	{
		for (int i = 0; i < 50000; i++)
		{
			tmp.push_back(rand());
		}
		test.addNumber(tmp.begin(), tmp.end());
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.getArray().size() << std::endl;
		test.addNumber(tmp.begin(), tmp.end());
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.getArray().size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	



	return 0;
}