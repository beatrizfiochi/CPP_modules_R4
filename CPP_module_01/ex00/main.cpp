/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 14:45:14 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/21 16:54:32 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Zombie bZombie("Buga");
	bZombie.announce();

	Zombie *hZombie = newZombie("Huga");
	hZombie->announce();
	delete(hZombie);

	randomChump("Suga");

	return 0;
}
