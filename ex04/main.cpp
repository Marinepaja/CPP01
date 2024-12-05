/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:53:37 by mlaporte          #+#    #+#             */
/*   Updated: 2024/09/25 17:53:37 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


int ft_replace(std::string &text, std::string s1, std::string s2)
{
	std::size_t found = text.find(s1, 0);
	std::size_t i = 0;

	while (found < text.length() && i < text.length())
	{
		text.insert(found, s2);
		text.erase(found + s2.length(), s1.length());
		i= found + s2.length();
		found = text.find(s1, i);
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	std::string s1 = argv[2];
	if (s1 == "")
		return (1);
	std::string s2 = argv[3];
	std::string file = argv[1];
	std::ifstream infile(file.c_str());

	if (!infile.is_open())
	{
		std::cout << "Could not open file " << file << std::endl;
		return (1);
	}
	std::string line;
	std::string text;

	std::ofstream outfile(file.append(".replace").c_str());
	if (!outfile.is_open())
	{
		std::cout << "Could not open file " << file << std::endl;
		return (1);
	}
	while (getline(infile, line))
		text.append(line);
	ft_replace(text, s1, s2);
	outfile << text;
	return (0);
}