/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:38:05 by mlaporte          #+#    #+#             */
/*   Updated: 2024/09/02 12:38:05 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie[i].set_name(name);
		zombie[i].announce();
	}
	return (zombie);
}