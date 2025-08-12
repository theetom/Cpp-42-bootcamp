/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:48:09 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/11 16:00:29 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>

class Fixed
{
	private :
		static const int _literal = 8;

    public:
        Fixed(const int number);
        Fixed(const Fixed& other);
        Fixed &operator=(const Fixed &other);
		Fixed &operator<<(const Fixed &other);
        ~Fixed();

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

#endif
// varivel++
