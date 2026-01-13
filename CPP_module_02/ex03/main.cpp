/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:06:43 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/13 21:43:04 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main(void)
{
	Point	a(0.0f, 0.0f);
	Point	b(10.0f, 0.0f);
	Point	c(0.0f, 10.0f);
	Point	p1(3.0f, 3.0f);
	Point	p2(10.0f, 10.0f);
	Point	p3(5.0f, 0.0f);

	std::cout << "p1 is " << (bsp(a, b, c, p1) ? "inside" : "outside") << " the triangle" << std::endl;
	std::cout << "p2 is " << (bsp(a, b, c, p2) ? "inside" : "outside") << " the triangle" << std::endl;
	std::cout << "p3 is " << (bsp(a, b, c, p3) ? "inside" : "outside") << " the triangle" << std::endl;
	return (0);
}