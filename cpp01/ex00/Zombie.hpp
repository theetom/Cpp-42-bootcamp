/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:00:44 by etom              #+#    #+#             */
/*   Updated: 2025/07/25 10:19:15 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP

 #include <string>
 #include <iostream>

class Zombie
{
	private:
		std::string name;
	public:

		Zombie();
		~Zombie();
		void announce();
		void name_setter(std::string new_name);
		// void name_setter(std::string name);

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif