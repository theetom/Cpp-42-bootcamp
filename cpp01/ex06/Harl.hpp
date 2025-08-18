/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:41:30 by etom              #+#    #+#             */
/*   Updated: 2025/08/18 18:36:19 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	private:
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
		void _defaultComplain( void );
	
	public:
		Harl();
		~Harl();
		void complain( std::string level );

};

#endif