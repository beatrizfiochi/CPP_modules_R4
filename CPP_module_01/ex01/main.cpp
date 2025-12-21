/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 16:59:15 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/21 17:52:46 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	int	N = 10;

	std::cout << "Testing with zero: " << std::endl;
	Zombie	*zeroHorde = zombieHorde(0, "Zero");
	std::cout << std::endl;

	std::cout << "Testing with 10 zombies: " << std::endl;
	Zombie	*horde = zombieHorde(N, "Buga");

	if (zeroHorde)
		zeroHorde->announce();

	if (horde)
	{
		for (int i = 0; i < N; i++)
			horde[i].announce();
		delete[] horde;
	}
	return 0;
}
