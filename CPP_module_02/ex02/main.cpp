/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 20:22:32 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/15 18:30:05 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) 
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    
    // std::cout << std::endl;
    // std::cout << Fixed::min(a, b) << std::endl;

    // std::cout << std::endl;
    // Fixed c(1);
    // Fixed d(2);
    // Fixed e;
    // Fixed f(1);
    // Fixed g(2);
    
    // std::cout << c << std::endl;
    // std::cout << d << std::endl;
    // std::cout << e << std::endl;
    // std::cout << f << std::endl;
    // std::cout << g << std::endl;
    
    // if (c < d)
    //     std::cout << "c < d" << std::endl;
    // if (d > c)
    //     std::cout << "d > c" << std::endl;
    // if (c >= f)
    //     std::cout << "c >= f" << std::endl;
    // if (d <= g)
    //     std::cout << "d <= g" << std::endl;
    // if (c == f)
    //     std::cout << "c == f" << std::endl;
    // if (c != d)
    //     std::cout << "c != d" << std::endl;
    // std::cout << std::endl;
    // e = c + d;
    // std::cout << e << std::endl;
    // e = c - d;
    // std::cout << e << std::endl;
    // e = c * d;
    // std::cout << e << std::endl;
    // e = c / d;
    // std::cout << e << std::endl;
    // std::cout << std::endl;
    // std::cout << a << std::endl;
    // std::cout << --a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a-- << std::endl;
    // std::cout << a << std::endl;
    return (0);
}