/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:26:25 by mlaporte          #+#    #+#             */
/*   Updated: 2024/09/02 14:26:25 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name)
{
	// this->_name = name;
	// this->_weapon->setType("");
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::attack() const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with his bear hands because he has no weapon !" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	std::cout << this->_weapon->getType() << std::endl;
	this->_weapon = &weapon;
	std::cout << this->_weapon->getType() << std::endl;

}