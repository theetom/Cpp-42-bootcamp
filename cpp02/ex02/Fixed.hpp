/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:00:50 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/20 19:43:20 by toferrei         ###   ########.fr       */
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

		bool operator<(const Fixed &num) const; // do actual comparison
		bool operator>(const Fixed &num) const; // return A < B
		bool operator<=(const Fixed &num) const; // return !(A > B)
		bool operator>=(const Fixed &num) const; // return !(A < B)

		bool operator==(const Fixed &num) const; // do actual comparison
		bool operator!=(const Fixed &num) const; // return !(A == B)

		Fixed operator+(const Fixed &num) const;
		Fixed operator-(const Fixed &num) const;
		Fixed operator*(const Fixed &num) const;
		Fixed operator/(const Fixed &num) const;

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		int getRawBits() const;
		void setRawBits( int const raw );

		float toFloat() const;
		int toInt() const;

		static Fixed &max(Fixed &numA, Fixed &numB);
		static const Fixed &max(const Fixed &numA, const Fixed &numB);
		static Fixed &min(Fixed &numA, Fixed &numB);
		static const Fixed &min(const Fixed &numA, const Fixed &numB);

};

std::ostream &operator<<( std::ostream& out, const Fixed &fixed );


#endif
