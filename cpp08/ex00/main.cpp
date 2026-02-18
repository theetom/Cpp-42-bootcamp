/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:32:51 by toferrei          #+#    #+#             */
/*   Updated: 2026/02/18 12:44:59 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <deque>
#include <list>

int main ()
{
	std::vector<int> arr;

	std::cout << "\n Array without \n" << std::endl;

	for (int i = 0; i < 50; i += 10)
	{
		arr.push_back(i);
	}
	try
	{
		for(std::vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
		{
			std::cout << *it << std::endl;
		}
		std::cout << "number to be found: 50" << "result:" << *easyfind(arr, 50) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n Array with \n" << std::endl;

	try
	{
		for(std::vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
		{
			std::cout << *it << std::endl;
		}
		std::cout << "number to be found: 40 " << "result: " << *easyfind(arr, 40) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n String without \n" << std::endl;

	std::string ola;
	ola = "50";
	try
	{
		std::cout << "number to be found: 50 " << "result: " << *easyfind(arr, 50)<< std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n Queue with \n" << std::endl;

	std::deque<int> queue;
	for (int i = 0; i < 50; i += 10)
	{
		queue.push_back(i);
	}
	try
	{
		std::cout << "number to be found: 20 " << "result: " << *easyfind(queue, 20)<< std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n List Erase/Replace \n" << std::endl;

	std::list<int> list;
	for (int i = 0; i < 50; i += 10)
	{
		list.push_back(i);
	}
	try
	{
		for(std::list<int>::iterator it = list.begin(); it != list.end(); it++)
		{
			std::cout << *it << std::endl;
		}
		std::cout << std::endl;
		list.erase(easyfind(list, 20));
		list.insert(easyfind(list, 30), 100);
		for(std::list<int>::iterator it = list.begin(); it != list.end(); it++)
		{
			std::cout << *it << std::endl;
		}
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
