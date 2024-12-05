/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:39:00 by mlaporte          #+#    #+#             */
/*   Updated: 2024/09/02 13:39:00 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
// Weapon club = Weapon("crude spiked club");
// std::cout << "club : " << club.getType() << std::endl;

HumanB jim("Jim");
// std::cout << "club : " << club.getType() << std::endl;

// jim.setWeapon(club);
// std::cout << "club : " << club.getType() << std::endl;

jim.attack();
// club.setType("some other type of club");
jim.attack();
}
return 0;
}