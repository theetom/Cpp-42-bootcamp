/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:40:40 by toferrei          #+#    #+#             */
/*   Updated: 2025/06/25 13:30:01 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <chrono>
#include <sstream>
#include <string>

int main()
{
	int i = 0;
	std::string buf = "";
	while (buf.compare("EXIT") != 0)
	{
		std::getline(std::cin, buf);
		i++;
		std::cout << i << " " << buf << std::endl;
		buf = buf.substr(0, buf.find(' '));
		std::cout << i << " " << buf << std::endl;
	}
	return (0);
}


