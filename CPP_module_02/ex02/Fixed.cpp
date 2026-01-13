/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 20:22:59 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/13 21:02:12 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//Default contructor
Fixed::Fixed(void) : _fixedPointValue(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

//Copy constructor
Fixed::Fixed(const Fixed &copy)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

//Copy assignment operator
Fixed& Fixed::operator = (const Fixed &copy)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        this->_fixedPointValue = copy.getRawBits();
    return (*this);
}

//Destructor
Fixed::~Fixed(void) 
{
    // std::cout << "Destructor called" << std::endl;
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

//COMPARISON OPERATORS
// Allow to compare Fixed objects using standard comparison operators
// Return true or false based on the comparison

bool Fixed::operator>(const Fixed &other) const
{
    return (this->_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->_fixedPointValue < other._fixedPointValue);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->_fixedPointValue >= other._fixedPointValue);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->_fixedPointValue <= other._fixedPointValue);
}

bool Fixed::operator==(const Fixed &other) const
{
    return (this->_fixedPointValue == other._fixedPointValue);
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (this->_fixedPointValue != other._fixedPointValue);
}

//ARITHMETIC OPERATORS
// Allow to perform arithmetic operations on Fixed objects
// Return a new Fixed object that represents the result of the operation

Fixed   Fixed::operator+(const Fixed &other) const
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &other) const
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &other) const
{
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed   Fixed::operator/(const Fixed &other) const
{
    return (Fixed(this->toFloat() / other.toFloat()));
}

//INCREMENT AND DECREMENT OPERATORS
// Allow to increment and decrement Fixed objects
// Prefix increment and decrement operators return a reference to the current object
// Postfix increment and decrement operators return a copy of the current objec before the operation

Fixed   &Fixed::operator++(void)
{
    ++_fixedPointValue;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   temp = *this;
    ++_fixedPointValue;
    return (temp);
}

Fixed   &Fixed::operator--(void)
{
    --_fixedPointValue;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed   temp = *this;
    --_fixedPointValue;
    return (temp);
}

//STATIC MIN AND MAX METHODS
// Return the min and max of two Fixed objects

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}