/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 00:12:14 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/21 13:28:00 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():_x(0), _y(0)
{

}

Point::~Point()
{

}

Point::Point(const float newX, const float newY):_x(newX), _y(newY)
{

}

Point::Point(const Point &copy):_x(copy.getX()), _y(copy.getY())
{
	// *this = copy;
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

std::ostream &operator<<(std::ostream &out, const Point &point)
{
	out << "x: " << point.getX() << " / y: " << point.getY();
	return (out);
}