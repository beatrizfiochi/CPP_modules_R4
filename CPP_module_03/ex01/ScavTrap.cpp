/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:11:21 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/20 13:44:31 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

#define HIT_POINT_INIT 100
#define ENERGY_POINT_INIT 50
#define ATTACK_DAMAGE_INIT 20

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hitPoints = HIT_POINT_INIT;
	_energyPoints = ENERGY_POINT_INIT;
	_attackDamage = ATTACK_DAMAGE_INIT;
	std::cout << "ScavTrap default constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = HIT_POINT_INIT;
	_energyPoints = ENERGY_POINT_INIT;
	_attackDamage = ATTACK_DAMAGE_INIT;
    std::cout << "ScavTrap named constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &copy)
        ClapTrap::operator=(copy);
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;

}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0 && this->_hitPoints <= 0)
        std::cout << "ScavTrap " << this->_name << " can't attack. Not enough energy nor hit points" << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "ScavTrap " << this->_name << " can't attack. Not enough energy points" << std::endl;
    else if (this->_hitPoints <= 0)
        std::cout << "ScavTrap " << this->_name << " can't attack. Not enough hit points" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
}
