/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 23:18:20 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/21 01:23:16 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>

int main( void )
{
	const Point a(0, 10);

	std::cout << std::endl;
	std::cout << a.getX() << std::endl;
	std::cout << a.getY() << std::endl;

	std::cout << a << std::endl;
}