/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlicame <emlicame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:00:50 by emlicame          #+#    #+#             */
/*   Updated: 2023/07/03 19:02:34 by emlicame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
	public:
			
			ScavTrap( void );
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap &source);
			~ScavTrap( void );
			ScavTrap & operator = (const ScavTrap &source);

			void attack(const std::string& target);			
			void guardGate( void );
};

#endif
