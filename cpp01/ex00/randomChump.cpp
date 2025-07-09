/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 07:57:08 by etom              #+#    #+#             */
/*   Updated: 2025/07/09 17:04:57 by etom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie zombie;

	zombie.name_setter(name); 
	std::cout << name << " :BraiiiiiiinnnzzzZ..." << std::endl;
}
