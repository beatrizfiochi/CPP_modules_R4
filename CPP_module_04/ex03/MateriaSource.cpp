/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 09:42:24 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/22 10:16:21 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include <string>

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource default constructor" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    std::cout << "MateriaSource copy constructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (copy.materias[i])
            this->materias[i] = copy.materias[i]->clone();
        else
            this->materias[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{
    std::cout << "MateriaSource copy assignment operator" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++)
        {
            if (copy.materias[i])
                this->materias[i] = copy.materias[i]->clone();
            else
                this->materias[i] = NULL;
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource destructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete this->materias[i];
        this->materias[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] == NULL)
        {
            this->materias[i] = m->clone();
            std::cout << "Learned materia of type " << m->getType() << std::endl;
            delete m;
            return ;
        }
    }
    std::cout << "Impossible to learn more. Learning space is full" << std::endl;
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (this->materias[i] && this->materias[i]->getType() == type)
        {
            std::cout << "Created materia of type " << type << std::endl;
            return (this->materias[i]->clone());
        }
    }
    std::cout << "Type not recognized, try learn it first" << std::endl;
    return (NULL);
}
