/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 13:46:11 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/21 16:35:20 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

// Constructor
// with initializer list (non static variables)
Zombie::Zombie(const std::string &zombieName) : name(zombieName){}

// Destructor
Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " was destroyed!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
