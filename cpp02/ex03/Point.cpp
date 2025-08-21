/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 00:12:14 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/21 01:19:17 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():_x(0), _y(0)
{
	std::cout << "default" << std::endl;
}

Point::~Point()
{

}

Point::Point(const float newX, const float newY):_x(newX), _y(newY)
{
	std::cout << "float" << std::endl;
	std::cout << _x << "ola" << _y;
}

Point::Point(const Point &copy)
{
	*this = copy;
}

Point &Point::operator=( const Point &copy )
{
	if (this == &copy)
		return (*this);
	return (*this);
}

const Fixed &Point::getX() const
{
	return(this->_x);
}

const Fixed &Point::getY() const
{
	return (this->_y);
}

std::ostream &operator<<(std::ostream &out, Point const point)
{
	out << "x: " << point.getX() << " / y: " << point.getY() << std::endl;
	return (out);
}