/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:49:55 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/13 20:20:03 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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

//Integer constructor
Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = n << _fractionalBits;
}

//Float constructor
Fixed::Fixed(float const f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(f * (1 << _fractionalBits));
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->_fixedPointValue / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_fixedPointValue >> _fractionalBits);   
}

//Overload the << operator
std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}