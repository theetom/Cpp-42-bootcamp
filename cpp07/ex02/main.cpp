/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:47:20 by toferrei          #+#    #+#             */
/*   Updated: 2025/12/09 14:43:30 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> test;
	Array<int> arr(1);

	std::cout << "arr size" << arr.size() << std::endl;

	std::cout << test;
	arr[0] = 21;
	Array<int> arr2(arr);
	std::cout << "arr " << arr;
	arr[0] = 0;
	std::cout << "arr2 " << arr2;
	std::cout << "arr " << arr;
	arr2 = arr;
	std::cout << "arr2 " << arr2;

	try
	{
		std::cout << arr2[21];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		arr2[21] = 21;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}