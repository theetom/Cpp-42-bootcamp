/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 23:18:20 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/21 11:50:49 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

int main( void )
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		std::cout << "same but commented" << std::endl;

		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << "a = " << a << std::endl;
		std::cout << "++a = " << ++a << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "a++ = " << a++ << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "--a = " << --a << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "a-- = " << a-- << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "a = " << a-- << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "max a and b" << Fixed::max( a, b )<< "\n" << std::endl;
	}
	{
		std::cout << "\n--- Arithmetic Tests ---\n";

		Fixed a(3);
		Fixed b(2);

		std::cout << a << " + " << b << " = " << a + b << "\n";
		std::cout << a << " - " << b << " = " << a - b << "\n";
		std::cout << a << " * " << b << " = " << a * b << "\n";
		std::cout << a << " / " << b << " = " << a / b << "\n"<<std::endl;
	}
	{
		Fixed a(3);
		Fixed b(2.5f);

		std::cout << a << " + " << b << " = " << a + b << "\n";
		std::cout << a << " - " << b << " = " << a - b << "\n";
		std::cout << a << " * " << b << " = " << a * b << "\n";
		std::cout << a << " / " << b << " = " << a / b << "\n"<<std::endl;
	}
	{
		std::cout << "\n--- min/max Tests ---\n"<<std::endl;

		Fixed a(1);
		Fixed b(2);

		std::cout << "a = " << a << ", b = " << b << "\n";
		std::cout << "min(a, b) = " << Fixed::min(a, b) << "\n";
		std::cout << "max(a, b) = " << Fixed::max(a, b) << "\n";

		const Fixed c(3), d(4);
		std::cout << "const c = " << c << ", const d = " << d << "\n";
		std::cout << "min(c, d) = " << Fixed::min(c, d) << "\n";
		std::cout << "max(c, d) = " << Fixed::max(c, d) << "\n" <<std::endl;
	}
	{
		Fixed a(10.5f);
		Fixed b(10.5f);
		Fixed c(20.5f);
		std::cout << "Testing operator==:\n";
		std::cout << "a = " << a << ", b = " << b << ", c = " << c <<"\n";
		std::cout << "a == b: " << (a == b ? "TRUE" : "FALSE") << "\n";
		std::cout << "a == c: " << (a == c ? "TRUE" : "FALSE") << "\n";

		std::cout << "\nTesting operator!=:\n";
		std::cout << "a != c: " << (a != c ? "TRUE" : "FALSE") << "\n";
		std::cout << "a != b: " << (a != b ? "TRUE" : "FALSE") << "\n";
	}
	{
		Fixed a(10);
		Fixed b(20);
		Fixed c(10);

		std::cout << "Testing operator<:\n";
		std::cout << "a < b: " << (a < b ? "TRUE" : "FALSE") << "\n";
		std::cout << "b < a: " << (b < a ? "TRUE" : "FALSE") << "\n";
		std::cout << "a < c: " << (a < c ? "TRUE" : "FALSE") << "\n";

		std::cout << "\nTesting operator>:\n";
		std::cout << "b > a: " << (b > a ? "TRUE" : "FALSE") << "\n";
		std::cout << "a > b: " << (a > b ? "TRUE" : "FALSE") << "\n";
		std::cout << "a > c: " << (a > c ? "TRUE" : "FALSE") << "\n";

		std::cout << "\nTesting operator<=:\n";
		std::cout << "a <= b: " << (a <= b ? "TRUE" : "FALSE") << "\n";
		std::cout << "b <= a: " << (b <= a ? "TRUE" : "FALSE") << "\n";
		std::cout << "a <= c: " << (a <= c ? "TRUE" : "FALSE") << "\n";

		std::cout << "\nTesting operator>=:\n";
		std::cout << "b >= a: " << (b >= a ? "TRUE" : "FALSE") << "\n";
		std::cout << "a >= b: " << (a >= b ? "TRUE" : "FALSE") << "\n";
		std::cout << "a >= c: " << (a >= c ? "TRUE" : "FALSE") << "\n";
}
}