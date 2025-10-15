/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:50:06 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/15 14:31:01 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

/* void printi(int i)
{
	std::cout << i << std::endl;
} */

void multiply(int &i)
{
	i *= 2;
}

void toUpper(std::string &str)
{
	size_t i = 0;
	while (i < str.length())
	{
		str[i] = toupper(str[i]);
		i++;
	}
}

int main( void )
{
	int arr[] = {21, 5 , 100};

	::iter(arr, 3, ::multiply);
	::print(arr, 3);

	std::string str[] = {"ola", "como", "estamos"};

	::iter(str, 3, ::toUpper);
	::print(str, 3);

}