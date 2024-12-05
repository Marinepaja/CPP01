/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 23:36:05 by mlaporte          #+#    #+#             */
/*   Updated: 2024/09/01 23:36:05 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
	public :
		Zombie();
		~Zombie();
		void	announce(void) const; 
		void	set_name(std::string);
	private :
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
