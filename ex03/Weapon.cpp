/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:40:25 by mlaporte          #+#    #+#             */
/*   Updated: 2024/09/02 14:40:25 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string weapon)
{
	setType(weapon);
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string Weapon::getType()const
{
	return(this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}