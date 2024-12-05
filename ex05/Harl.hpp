/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:49:19 by mlaporte          #+#    #+#             */
/*   Updated: 2024/09/27 16:49:19 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>


class Harl
{
	public :
	Harl();
	~Harl();
	void complain(std::string level) const;

	private :
	void debug(void) const;
	void info(void) const;
	void warning(void) const;
	void error(void) const;
	typedef void (Harl::*funct)(void) const;
	funct	lvl[4];
};





#endif