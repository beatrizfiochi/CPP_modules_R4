/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:08:50 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/13 19:34:04 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include <iostream>

//Default contructor
Fixed::Fixed(void) : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

//Copy constructor
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

//Copy assignment operator
Fixed& Fixed::operator = (const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        this->_fixedPointValue = copy.getRawBits();
    return (*this);
}

//Destructor
Fixed::~Fixed(void) 
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}