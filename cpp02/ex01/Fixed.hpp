/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:11:58 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/20 14:16:31 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _literal = 8;

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
};

std::ostream &operator<<( std::ostream& out, const Fixed &fixed );


#endif
