/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 23:18:20 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/21 18:08:09 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);


int main( void )
{
	const Point a(0, 0);
	const Point b(0, 25);
	const Point c(25, 0);
	const Point point(0.5f, 12);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "point is " << point << "\n" <<std::endl;

	if (bsp(a, b, c, point))
		std::cout << "is inside" << std::endl;
	else
		std::cout << "is not inside" << std::endl;
	return (0);
}
