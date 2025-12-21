/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:02:08 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/21 17:32:11 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "Invalid number of zombies" << std::endl;
		return NULL;
	}

	Zombie	*zHorde = new Zombie[N];
	if (!zHorde)
	{
		std::cout << "Fallure to allocate memory" << std::endl;
		return NULL;
	}

	for (int i = 0; i < N; i++)
	{
		zHorde[i].setName(name);
	}
	return (zHorde);
}
