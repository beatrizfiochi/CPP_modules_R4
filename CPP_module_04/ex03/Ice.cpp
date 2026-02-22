/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:31:47 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/22 11:02:45 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include <iostream>
#include <string>

Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
    std::cout << "Ice copy constructor" << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
    std::cout << "Ice copy assigment operator" << std::endl;
    if (this != &copy)
        AMateria::operator=(copy);
    return (*this);
}

Ice::~Ice(void)
{
    std::cout << "Ice destructor" << std::endl;
}

Ice *Ice::clone(void) const
{
    std::cout << "Ice is cloned" << std::endl;
    return (new Ice(*this)); //deep copy
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
