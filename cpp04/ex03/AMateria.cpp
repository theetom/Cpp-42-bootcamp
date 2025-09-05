/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:52:29 by toferrei          #+#    #+#             */
/*   Updated: 2025/09/05 22:54:41 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("some type")
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(std::string const &type):_type(type)
{

}

AMateria::AMateria(const AMateria &copy):_type(copy._type)
{

}

AMateria& AMateria::operator=(const AMateria &src)
{
	if (this != &src)
		_type = src._type;
	return (*this);
}

const std::string& AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Default attack on " << target.getName() << std::endl;
}