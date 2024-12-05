/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:08:20 by mlaporte          #+#    #+#             */
/*   Updated: 2024/09/02 14:08:20 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
// #include "HumanA.hpp"
// #include "HumanB.hpp"


class Weapon
{
	public:
		Weapon();
		Weapon(std::string weapon);
		~Weapon();
		std::string getType() const;
		void setType(std::string);

	private:
		std::string _type;

};

#endif