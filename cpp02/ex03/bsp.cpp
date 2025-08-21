/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:56:24 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/21 18:07:34 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static Fixed area(const Fixed &xA, const Fixed &yA, const Fixed &xB, const Fixed &yB, const Fixed &xC, const Fixed &yC)
{
	Fixed result;
	result = (xA * (yB - yC) + xB * (yC - yA) + xC * (yA - yB)) / Fixed(2.0f);
	return ((result > Fixed(0)) ? result : (result * Fixed(-1)));
}

bool isOnLine(const Fixed &xA, const Fixed &yA, const Fixed &xB, const Fixed &yB, const Fixed &xC, const Fixed &yC)
{
	std::cout << "line __ xa= "<< xA << " yA= " << yA << " xB= "<<xB << " yB= " << yB << " xC= "<<xC << " yC= " << yC << "\narea " << area(xA, yA, xB, yB, xC, yC) << std::endl;
	std::cout << "min(xx) " << Fixed::min(xA, xB) << " max(xx) " <<Fixed::max(xA, xB) << " min(yy) " <<Fixed::min(yA, yB) << " max(yy) " << Fixed::max(yA, yB)<< std::endl;
	if (area(xA, yA, xB, yB, xC, yC) == 0
		&& (Fixed::min(xA, xB) >= xC)
		&& (Fixed::max(xA, xB) <= xC)
		&& (Fixed::min(yA, yB) >= yC)
		&& (Fixed::max(yA, yB) <= yC))
		return (1);
	std::cout << "ola\n";
	return (0);
}
/* bool isOnLine(const Fixed &xA, const Fixed &yA, const Fixed &xB, const Fixed &yB, const Fixed &xC, const Fixed &yC)
{
	Fixed distanceAB2;
	Fixed distanceAC2;
	Fixed distanceBC2;

	distanceAB2 = ((xA - xB) * (xA - xB)) + ((yA - yB) * (yA - yB));
	distanceAC2 = ((xA - xC) * (xA - xC)) + ((yA - yC) * (yA - yC));
	distanceBC2 = ((xB - xC) * (xB - xC)) + ((yB - yC) * (yB - yC));
	std::cout << "dAB2 " << distanceAB2 << " dAC2 " << distanceAC2 << " dBC2 " << distanceBC2 << std::endl;
	std::cout << "result" << distanceAC2 + distanceBC2 << std::endl;
	return (distanceAB2 == distanceAC2 + distanceBC2);
} */

bool isOnCorner(const Fixed &xA, const Fixed &yA, const Fixed &xB, const Fixed &yB)
{
	std::cout << "xa= "<< xA << " yA= " << yA << " xB= "<<xB << " yB= " << yB << std::endl;
	if (xA == xB && yA == yB)
		return (1);
	return (0);
}

bool isOnPerimeter(Point const &a, Point const &b, Point const &c, Point const &point)
{
	if (isOnCorner(a.getX(), a.getY(), point.getX(), point.getY())
		|| isOnCorner(b.getX(), b.getY(), point.getX(), point.getY())
		|| isOnCorner(c.getX(), c.getY(), point.getX(), point.getY())
		|| isOnLine(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY())
		|| isOnLine(a.getX(), a.getY(), c.getX(), c.getY(), point.getX(), point.getY())
		|| isOnLine(b.getX(), b.getY(), c.getX(), c.getY(), point.getX(), point.getY()))
		return (1);
	return (0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	std::cout << "a= "<< a << " b= " << b << " c= "<<c << " point= " << point << std::endl;
	if (isOnPerimeter(a, b, c, point)) 
		return (0);
	Fixed A = area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	std::cout << "A "<< A << std::endl;
	Fixed A1 = area(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	std::cout << "A1 " << A1 << std::endl;
	Fixed A2 = area(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY());
	std::cout << "A2 " << A2 << std::endl;
	Fixed A3 = area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());
	std::cout << "A3 " << A3 << std::endl;

	Fixed result;
	result = A1 + A2 + A3;
	std::cout << result << std::endl;
	return (A == A1 + A2 + A3);
}
