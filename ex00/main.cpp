/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 23:40:12 by mlaporte          #+#    #+#             */
/*   Updated: 2024/09/01 23:40:12 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie;
	Zombie	*zombie2;

	zombie = newZombie("Marr");
	zombie->announce();
	zombie2 = newZombie("Boudin");
	zombie2->announce();
	randomChump("Pouff");
	delete zombie2;
	delete zombie;
	

	return (0);
}