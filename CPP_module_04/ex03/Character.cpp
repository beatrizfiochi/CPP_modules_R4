/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 08:34:34 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/22 10:28:49 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include <iostream>
#include <string>

Character::Character(void) : _name("Not set"), floorIdx(0)
{
    std::cout << "Character default constructor" << std::endl;
    for (int i = 0; i < 4; i++)
        this->slots[i] = NULL;
    for (int i = 0; i < MAX_FLOOR; i++)
        this->floor[i] = NULL;
}

Character::Character(std::string const &name) : _name(name), floorIdx(0)
{
    std::cout << "Character named constructor" << std::endl;
    for (int i = 0; i < 4; i++)
        this->slots[i] = NULL;
    for (int i = 0; i < MAX_FLOOR; i++)
        this->floor[i] = NULL;
}
Character::Character(const Character &copy) : _name(copy._name), floorIdx(0)
{
    std::cout << "Character copy constructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (copy.slots[i])
            this->slots[i] = copy.slots[i]->clone();
        else
            this->slots[i] = NULL;
    }
    for (int i = 0; i < MAX_FLOOR; i++)
        this->floor[i] = NULL;
}

Character& Character::operator=(Character const &copy)
{
    std::cout << "Character copy assigment operator" << std::endl;
    if (this != &copy)
    {
        this->_name = copy._name;
        for (int i = 0; i < 4; i++)
        {
            delete this->slots[i];
            if (copy.slots[i])
                this->slots[i] = copy.slots[i]->clone();
            else
                this->slots[i] = NULL;
        }
        for (int i = 0; i < MAX_FLOOR; i++)
        {
            delete this->floor[i];
            this->floor[i] = NULL;
        }
        this->floorIdx = 0;
    }
    return (*this);
}

Character::~Character(void)
{
    std::cout << "Character destructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete this->slots[i];
        this->slots[i] = NULL;
    }
    for (int i = 0; i < MAX_FLOOR; i++)
        delete this->floor[i];
}

std::string const &Character::getName(void) const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    if (!m)
    {
        std::cout << "Unknown materia" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i] == NULL)
        {
            this->slots[i] = m;
            std::cout << m->getType() << " was equiped on slot number " << i << " by " << this->_name << std::endl;
            return ;
        }
    }
    std::cout << this->_name << "' slots are full" << std::endl;
    delete m;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->slots[idx])
    {
        if (floorIdx < MAX_FLOOR)
        {
            std::cout << this->slots[idx]->getType() << " was unequiped by " << this->_name << " and is now on the floor" << std::endl;
            this->floor[floorIdx++] = this->slots[idx];
            this->slots[idx] = NULL;
            return ;
        }
        std::cout << "The floor is full, please consider recycling" << std::endl;
    }
    std::cout << "Cannot unequip slot " << idx << "\nCheck if it's empty or out of range" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->slots[idx])
    {
        this->slots[idx]->use(target);
        return ;
    }
    std::cout << "Cannot use slot " << idx << "\n Check if it's empty or out of range" << std::endl;
}
