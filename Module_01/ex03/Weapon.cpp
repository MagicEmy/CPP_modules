/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlicame <emlicame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:04:39 by emlicame          #+#    #+#             */
/*   Updated: 2023/05/18 13:02:14 by emlicame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type) : _type (type) {}


std::string const & Weapon::getType() const
{
	return this->_type;
}

void	Weapon::setType(std::string	type)
{
	this->_type = type;
}