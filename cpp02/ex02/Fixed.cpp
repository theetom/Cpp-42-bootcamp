/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:00:45 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/20 19:17:17 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const int newValue)
{
	// std::cout << "Int constructor called" << std::endl;
	_value = (newValue << _literal);
}

Fixed::Fixed( const float newValue)
{
	// std::cout << "Float constructor called" << std::endl;
	_value = (int)roundf(newValue * (1 << _literal));
}

Fixed::Fixed( const Fixed &copy )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=( const Fixed &copy )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		_value = copy.getRawBits();
	return (*this);
}

bool operator<(const Fixed &numA, const Fixed &numB)
{
	return (numA._value < numB._value);
}

bool operator>(const Fixed &numA, const Fixed &numB)
{
	return (numB < numA);
}

bool operator<=(const Fixed &numA, const Fixed &numB)
{
	return !(numA < numB);
}

bool operator>=(const Fixed &numA, const Fixed &numB)
{
	return !(numA > numB);
}

Fixed &Fixed::operator++()
{
	_value = _value + 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old = (*this);
	operator++();
	return (old);
}

Fixed &Fixed::operator--()
{
	_value = _value - 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old = (*this);
	this->operator--();
	return (old);
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float Fixed::toFloat() const
{
	return ((float)_value / (float)(1 << _literal));
}

int Fixed::toInt() const
{
	return (_value >> _literal);
}

std::ostream &operator<<( std::ostream& out, const Fixed &fixed )
{
	out << fixed.toFloat();
	return (out);
}

Fixed &Fixed::max(Fixed &numA, Fixed &numB)
{
	return ((numA > numB) ? numA : numB);
}

const Fixed &Fixed::max(const Fixed &numA, const Fixed &numB)
{
	return ((numA > numB) ? numA : numB);
}

const Fixed &Fixed::min(const Fixed &numA, const Fixed &numB)
{
	return ((numA < numB) ? numA : numB);
}

Fixed &Fixed::min(Fixed &numA, Fixed &numB)
{
	return ((numA < numB) ? numA : numB);
}