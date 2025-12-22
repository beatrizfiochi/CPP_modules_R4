/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:41:00 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/22 11:18:29 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>
#include <string>

//Constructor
// with initializer list (non static variables)
HumanA::HumanA(std::string newName, Weapon &newWeapon) :
	name(newName), weapon(newWeapon) {}

// Destructor
HumanA::~HumanA(void) {}

void HumanA::attack(void) const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
