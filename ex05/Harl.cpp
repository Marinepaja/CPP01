/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:49:26 by mlaporte          #+#    #+#             */
/*   Updated: 2024/09/27 16:49:26 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	lvl[0] = &Harl::debug;
	lvl[1] = &Harl::info;
	lvl[2] = &Harl::warning;
	lvl[3] = &Harl::error;
}

Harl::~Harl(void)
{

}

void Harl::complain(std::string level) const
{
	// std::cout << "I'm complaining OK ?" << std::endl;
	std::string levl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i=0; i < 4; i++)
	{
		// std::cout << i  << std::endl;
		if (levl[i] == level)
		{
			(this->*lvl[i])();
			return;
		}
	}
}

void Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do !" << std::endl;
}

void Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) const
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
