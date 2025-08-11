/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:18:30 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/11 13:56:25 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <bits/stdc++.h> for transform


// converts lower case letter in string to upper case if char is lower case

/* char	*lowerCaseToUpper(char *str)
{
	for (int i = 0; str[i]; i++)
		if (islower(str[i]))
			str[i] -= 32;
	return (str);
}

// if a string was inputed as argument
// will print said string converted to upper case characters

int		main (int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; argv[i]; i++)
			std::cout << lowerCaseToUpper(argv[i]);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
 */

// converts lower case letter in string to upper case if char is lower case

int		main (int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; argv[i]; i++)
		{
			std::string str = argv[i];
			for (int n = 0; str[n]; n++)
			{
				str[n] = toupper(str[n]);
			}
			// transform(str.begin(), str.end(), str.begin(), ::toupper); not sure if forbiden fucntion	 
			std::cout << str;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}


