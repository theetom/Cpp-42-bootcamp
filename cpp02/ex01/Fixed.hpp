/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:11:58 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/21 00:23:25 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed( const int newValue );
		Fixed( const float newValue);

		Fixed( const Fixed &Fixed );
		Fixed &operator=( const Fixed &Fixed );

		int getRawBits() const;
		void setRawBits( int const raw );

		float toFloat() const;
		int toInt() const;

	private:
		int _value;
		static const int _literal = 8;

};

std::ostream &operator<<( std::ostream& out, const Fixed &fixed );


#endif
