/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:25:19 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/16 15:31:46 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

#define HIT_POINT_INIT 10
#define ENERGY_POINT_INIT 10
#define ATTACK_DAMAGE_INIT 0

ClapTrap::ClapTrap(void) : 
    _name("noname"), _hitPoints(HIT_POINT_INIT), 
    _energyPoints(ENERGY_POINT_INIT), _attackDamage(ATTACK_DAMAGE_INIT)
{
    std::cout << "ClapTrap default constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
    _name(name), _hitPoints(HIT_POINT_INIT), 
    _energyPoints(ENERGY_POINT_INIT), _attackDamage(ATTACK_DAMAGE_INIT)
{
    std::cout << "ClapTrap named constructor called for " << this->_name << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called for " << this->_name << std::endl;

}

void ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoints <= 0 && this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " can't attack. Not enough energy nor hit points" << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " can't attack. Not enough energy points" << std::endl;
    else if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " can't attack. Not enough hit points" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0) 
    {
        std::cout << "ClapTrap " << this->_name << " can't take more damage" << std::endl;
        return ;
    }
    if (this->_hitPoints > 0)
    {
        if ((int)amount > this->_hitPoints)
        {
            std::cout << "ClapTrap " << this->_name << " was supposed to take " << amount << " of damage, but only has " << this->_hitPoints << " of hit points" << std::endl;
            amount = this->_hitPoints;
        }
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
        this->_hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0 && this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " can't be repaired. Not enough energy nor hit points" << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " can't be repaired. Not enough energy points" << std::endl;
    else if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " can't be repaired. Not enough hit points" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " repairs itself with " << amount << " hit points!" << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints--;
    }
}

void ClapTrap::status(void)
{
    std::cout << "ClapTrap " << this->_name << " status:" << std::endl;
    std::cout << "\thit points: " << this->_hitPoints << std::endl;
    std::cout << "\tenergy points: " << this->_energyPoints << std::endl;
    std::cout << "\tattack damage: " << this->_attackDamage << std::endl;
}