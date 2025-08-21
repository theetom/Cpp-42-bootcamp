/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 00:11:59 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/21 01:13:18 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		~Point();
		Point( const Point &Point );
		Point( const float newX, const float newY );
		Point &operator=( const Point &Fixed );

		const Fixed &getX() const;
		const Fixed &getY() const;

	private:
		const Fixed _x;
		const Fixed _y;
};

std::ostream &operator<<(std::ostream &out, Point const point);

#endif