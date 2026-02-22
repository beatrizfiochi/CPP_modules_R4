/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:59:53 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/22 10:27:53 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(void) : _type("")
{
    std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria typed constructor" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type)
{
    std::cout << "AMateria copy constructor" << std::endl;
}
AMateria &AMateria::operator=(const AMateria &copy)
{
    std::cout << "AMateria copy assignment operator" << std::endl;
    if(this != &copy)
        this->_type = copy._type;
    return (*this);
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor" << std::endl;
}

std::string const &AMateria::getType(void) const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria: \"* does nothing to " << target.getName() << "*\"" << std::endl;
}
