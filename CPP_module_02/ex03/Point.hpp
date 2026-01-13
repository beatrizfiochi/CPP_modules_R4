/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:08:26 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/13 22:08:42 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point(void);
    Point(const float xf, const float yf);
    Point(const Point &copy);
    Point& operator=(const Point &copy);
    ~Point();
    Fixed const &getX(void) const;
    Fixed const &getY(void) const;
    bool operator==(const Point &other) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif