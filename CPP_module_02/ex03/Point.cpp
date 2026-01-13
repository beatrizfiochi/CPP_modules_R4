/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:08:51 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/13 22:34:20 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

//Default constructor
Point::Point(void) : x(0), y(0) {}

//Constructor with parameters
Point::Point(const float xf, const float yf) : x(xf), y(yf) {}

//Copy constructor
Point::Point(const Point &copy) : x(copy.x), y(copy.y) {}

//Copy assignment operator
Point& Point::operator = (const Point &copy)
{
    (void)copy;
    return (*this);
}

//Destructor
Point::~Point(void) {}

//Getters

Fixed const &Point::getX(void) const
{
    return (this->x);
}

Fixed const &Point::getY(void) const
{
    return (this->y);
}

bool Point::operator==(const Point &other) const
{
    if ((this->x == other.x) && (this->y == other.y))
        return (true);
    return (false);
}