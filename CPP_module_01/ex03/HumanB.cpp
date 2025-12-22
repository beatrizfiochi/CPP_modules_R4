/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:48:30 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/22 11:19:52 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <string>

//Constructor
// with initializer list (non static variables)
HumanB::HumanB(std::string newName) :
	name(newName), weapon(NULL) {}

// Destructor
HumanB::~HumanB(void) {}

void HumanB::attack(void) const
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " is unarmed" << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}
