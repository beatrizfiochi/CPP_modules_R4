/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:02:04 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/22 11:03:00 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include <iostream>
#include <string>

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
    std::cout << "Cure copy constructor" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
    std::cout << "Cure copy assigment operator" << std::endl;
    if (this != &copy)
        AMateria::operator=(copy);
    return (*this);
}

Cure::~Cure(void)
{
    std::cout << "Cure destructor" << std::endl;
}

Cure *Cure::clone(void) const
{
    std::cout << "Cure is cloned" << std::endl;
    return (new Cure(*this)); //deep copy
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
