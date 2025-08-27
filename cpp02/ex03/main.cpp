/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 23:18:20 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/27 13:24:46 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);


int main( void )
{
	const Point a(0, 5);
	const Point b(4, 0);
	const Point c(1.9f, 0.1f);
	const Point point(2, 0.05);
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
/*

(point(0,0), point(4,0), point(0,3), point(1,1)) → inside

(point(0,0), point(4,0), point(0,3), point(5,1)) → outside

(point(0,0), point(4,0), point(0,3), point(2,0)) → inside (on edge)

(point(0,0), point(4,0), point(0,3), point(0,0)) → outside (on vertex)

(point(-2,-1), point(5,0), point(1,4), point(1,1)) → inside

(point(-2,-1), point(5,0), point(1,4), point(4,4)) → outside

(point(-1,0), point(3,2), point(2,5), point(2.5,3.5)) → inside

(point(0,0), point(6,0), point(3,0.5), point(3,0.1)) → inside

(point(0,0), point(6,0), point(3,0.5), point(3,-0.1)) → outside

(point(-5,-5), point(5,-5), point(0,5), point(0,0)) → inside

(point(-5,-5), point(5,-5), point(0,5), point(-6,0)) → outside

(point(0,0), point(6,0), point(0,6), point(3,3)) → inside (on edge)

floats 

(point(0.0, 0.0), point(4.2, 0.0), point(0.0, 3.7), point(1.3, 1.1)) → inside

(point(0.0, 0.0), point(4.2, 0.0), point(0.0, 3.7), point(5.1, 1.0)) → outside

(point(0.0, 0.0), point(4.2, 0.0), point(0.0, 3.7), point(2.1, 0.0)) → inside (on edge)

(point(0.0, 0.0), point(4.2, 0.0), point(0.0, 3.7), point(0.0, 0.0)) → outside (on vertex)

(point(-2.5, -1.2), point(5.3, 0.0), point(1.0, 4.8), point(1.4, 1.6)) → inside

(point(-2.5, -1.2), point(5.3, 0.0), point(1.0, 4.8), point(4.7, 4.1)) → outside

(point(-1.3, 0.0), point(3.4, 2.1), point(2.2, 5.5), point(2.6, 3.6)) → inside

(point(0.0, 0.0), point(6.4, 0.0), point(3.0, 0.6), point(3.1, 0.2)) → inside

(point(0.0, 0.0), point(6.4, 0.0), point(3.0, 0.6), point(3.2, -0.1)) → outside

(point(-5.0, -5.0), point(5.0, -5.0), point(0.0, 5.2), point(0.0, 0.0)) → inside

(point(-5.0, -5.0), point(5.0, -5.0), point(0.0, 5.2), point(-6.1, 0.0)) → outside

(point(0.0, 0.0), point(6.8, 0.0), point(0.0, 6.8), point(3.4, 3.4)) → inside (on edge)

(point(0.0, 0.0), point(4.0, 0.0), point(0.0, 3.0), point(1.333333, 1.000000)) → inside (centroid)

(point(0.0, 0.0), point(4.0, 0.0), point(0.0, 3.0), point(2.000000, 0.000000)) → inside (exactly on edge midpoint)

(point(0.0, 0.0), point(4.0, 0.0), point(0.0, 3.0), point(2.000000, -0.000001)) → outside (just below edge; tests numerical tolerance)

(point(0.0, 0.0), point(4.0, 0.0), point(0.0, 3.0), point(0.000000, 0.000000)) → outside (exact vertex)

(point(-2.5, -1.5), point(5.1, 0.2), point(1.0, 4.8), point(1.259, 1.833)) → inside (interior point)

(point(-2.5, -1.5), point(5.1, 0.2), point(1.0, 4.8), point(4.700, 4.100)) → outside (clearly outside)

(point(-2.5, -1.5), point(5.1, 0.2), point(1.0, 4.8), point(1.000000, 4.800000)) → outside (vertex C)

(point(-1.3, 0.0), point(3.4, 2.1), point(2.2, 5.5), point(2.600000, 3.600000)) → inside (interior)

(point(-1.3, 0.0), point(3.4, 2.1), point(2.2, 5.5), point(1.050000, 0.525000)) → inside (near edge AB)

(point(-1.3, 0.0), point(3.4, 2.1), point(2.2, 5.5), point(1.049999, 0.524999)) → outside (just outside AB by 1e-6 — tests precision)

(point(0.0, 0.0), point(6.4, 0.0), point(3.0, 0.6), point(3.100000, 0.200000)) → inside (interior, slightly above base)

(point(0.0, 0.0), point(6.4, 0.0), point(3.0, 0.6), point(3.200000, -0.100000)) → outside (below base)

(point(0.0, 0.0), point(5.0, 0.0), point(0.000010, 0.000010), point(1.000000, 0.000020)) → inside (triangle extremely flat — P is inside thin triangle)

(point(0.0, 0.0), point(5.0, 0.0), point(0.000010, 0.000010), point(1.000000, -0.000001)) → outside (just below the nearly-collinear base)

(point(2.000000, 2.000000), point(2.000100, 2.000000), point(2.000000, 2.000100), point(2.000033, 2.000033)) → inside (very small triangle near numeric machine epsilon; P is interior)

(point(2.000000, 2.000000), point(2.000100, 2.000000), point(2.000000, 2.000100), point(2.000000, 2.000000)) → outside (exact vertex A)



*/