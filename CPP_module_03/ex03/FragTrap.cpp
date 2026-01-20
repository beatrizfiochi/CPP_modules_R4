/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:59:23 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/20 14:59:24 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

#define HIT_POINT_INIT 100
#define ENERGY_POINT_INIT 100
#define ATTACK_DAMAGE_INIT 30

FragTrap::FragTrap(void) : ClapTrap()
{
	_hitPoints = HIT_POINT_INIT;
	_energyPoints = ENERGY_POINT_INIT;
	_attackDamage = ATTACK_DAMAGE_INIT;
	std::cout << "FragTrap default constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = HIT_POINT_INIT;
	_energyPoints = ENERGY_POINT_INIT;
	_attackDamage = ATTACK_DAMAGE_INIT;
    std::cout << "FragTrap named constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &copy)
        ClapTrap::operator=(copy);
    return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is sending a positive high-fives request!" << std::endl;

}
