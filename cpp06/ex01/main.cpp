/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:42:45 by toferrei          #+#    #+#             */
/*   Updated: 2025/10/13 16:04:07 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data;

	data.name = "joao";
	data.i = 21;
	data.d = 22.123;

	std::cout << "name is: " << data.name << std::endl;
	std::cout << "i is: " << data.i << std::endl;
	std::cout << "d is: " << data.d << std::endl;
	std::cout << &data << std::endl;
	uintptr_t ptr;

	// std::cout << &ptr << std::endl;

	ptr = Serializer::serialize(&data);

	// std::cout << &ptr << std::endl;

	Data *datadois;
	datadois = Serializer::deserialize(ptr);

	std::cout << "name is: " << datadois->name << std::endl;
	std::cout << "i is: " << datadois->i << std::endl;
	std::cout << "d is: " << datadois->d << std::endl;	

	std::cout << &datadois << std::endl;

}