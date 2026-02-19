/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:10:29 by toferrei          #+#    #+#             */
/*   Updated: 2026/02/19 12:11:40 by toferrei         ###   ########.fr       */
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
	std::cout << "array" << std::endl;
	for (unsigned int i = 0; i < sp.getArray().size(); i++)
	{
		std::cout << sp.getArray().at(i) << std::endl;
	}
	try
	{
		std::cout << "shortest span:" << sp.shortestSpan() << std::endl;
		std::cout << "longest span:" << sp.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	struct timeval time;
	gettimeofday(&time, NULL);
	// srand(hash3(time.tv_sec, time.tv_usec, getpid()));
	srand(time.tv_usec);
	std::vector<int> tmp;
	Span test(100000);
	try
	{
		std::cout << "random array" << std::endl;
		for (int i = 0; i < 50000; i++)
		{
			tmp.push_back(rand());
			// test.addNumber(rand());
		}
		test.addNumber(tmp.begin(), tmp.end());
		tmp.clear();
		std::cout << "shortest span:" << test.shortestSpan() << std::endl;
		std::cout << "longest span:" << test.longestSpan() << std::endl;
		std::cout << "array size:" << test.getArray().size() << std::endl;
		for (int i = 0; i < 50000; i++)
		{
			tmp.push_back(rand());
			// test.addNumber(rand());
		}
		test.addNumber(tmp.begin(), tmp.end());
		std::cout << "shortest span:" << test.shortestSpan() << std::endl;
		std::cout << "longest span:" << test.longestSpan() << std::endl;
		std::cout << "array size:" << test.getArray().size() << std::endl;
		test.addNumber(rand());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}