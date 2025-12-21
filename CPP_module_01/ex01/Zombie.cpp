/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:01:00 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/21 17:21:47 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

// Default Constructor
Zombie::Zombie(void) {}

// Destructor
Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " was destroyed!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &zName)
{
	this->name = zName;
}
