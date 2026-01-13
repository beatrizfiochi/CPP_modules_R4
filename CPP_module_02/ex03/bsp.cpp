/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:09:57 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/13 22:10:29 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

//Computes the absolute value of the triangle area
// Returns the area as a Fixed-point number
// area = 0.5 * ​∣xa​(yb​−yc​)+xb​(yc​−ya​)+xc​(ya​−yb​)∣
static Fixed   area(Point const &a, Point const &b, Point const &c)
{
    Fixed   term1 = a.getX() * (b.getY() - c.getY());
    Fixed   term2 = b.getX() * (c.getY() - a.getY());
    Fixed   term3 = c.getX() * (a.getY() - b.getY());
    Fixed   area = term1 + term2 + term3;

    if (area < Fixed(0))
        area = area * Fixed(-1);
    return (area / Fixed(2));
}

static bool is_on_line(Point const &a, Point const &b, Point const &p)
{
    Fixed A = b.getY() - a.getY();
    Fixed B = a.getX() - b.getX();
    // C = y1 × (x2 - x1) - (y2 - y1) × x1.
    Fixed C = (a.getY() * (b.getX() - a.getX())) - (a.getX() * (b.getY() - a.getY()));
    // If the Point p is on the line, then the formula below will be 0
    // Ax + By + C = 0
    if (((A * p.getX()) + (B * p.getY()) + C) == 0)
        return (true);
    return (false);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    if ((point == a) || (point == b) || (point == c))
        return (false);
    
    if (is_on_line(a, b, point) || is_on_line(a, c, point) || is_on_line(b, c, point))
        return (false);
        
    Fixed   totalArea = area(a, b, c);
    Fixed   areaPBC = area(point, b, c);
    Fixed   areaAPC = area(a, point, c);
    Fixed   areaABP = area(a, b, point);
    
    if (totalArea != areaPBC + areaAPC + areaABP)
        return (false);
    return (true);
}