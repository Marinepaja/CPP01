/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:13:23 by mlaporte          #+#    #+#             */
/*   Updated: 2024/09/02 14:13:23 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void attack() const;
		void setWeapon(Weapon &new_weapon);

	private:
		std::string _name;
		Weapon *_weapon;

};

#endif