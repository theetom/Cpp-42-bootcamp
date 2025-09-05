/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:58:08 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/05 22:58:55 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("Ice")
{
	
}

Ice::Ice(const Ice &src)
{
	_type = src._type;
}

Ice& Ice::operator=(const Ice &src)
{
	if (this != &src)
		_type = src._type;
	return (*this);
}

Ice::~Ice()
{
	
}

Ice*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}