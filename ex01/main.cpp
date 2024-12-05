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
	int nb_zomb = 3;
	Zombie	*zombie = zombieHorde(nb_zomb, "Loli");

	delete [] zombie;
	

	return (0);
}