/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:00:44 by etom              #+#    #+#             */
/*   Updated: 2025/07/25 10:19:27 by toferrei         ###   ########.fr       */
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
		Zombie(std::string new_name);
		~Zombie();
		void announce();
		void name_setter(std::string new_name);
		std::string name_getter();

};

Zombie *zombieHorde(int N, std::string name);

#endif