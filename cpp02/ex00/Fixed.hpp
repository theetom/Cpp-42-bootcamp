/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:24:22 by etom              #+#    #+#             */
/*   Updated: 2025/08/12 16:42:34 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _value;
		static const int _literal = 8;

	public:
	  
		Fixed();
		~Fixed();
		Fixed( const Fixed &Fixed );
		Fixed &operator=( const Fixed &Fixed );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
