/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:00:44 by etom              #+#    #+#             */
/*   Updated: 2025/07/10 17:31:40 by etom             ###   ########.fr       */
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