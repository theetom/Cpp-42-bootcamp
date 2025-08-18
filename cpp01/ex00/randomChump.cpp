/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 13:41:44 by toferrei          #+#    #+#             */
/*   Updated: 2025/08/18 13:47:16 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string newName )
{
	Zombie zombie;

	zombie.nameSetter(newName);
	std::cout << zombie.nameGetter() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
