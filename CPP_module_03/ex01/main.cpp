/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:09:52 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/16 15:11:11 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int main(void)
{
    ClapTrap    a;
    ClapTrap    b("Beatriz");
    ClapTrap    c(b);
    ClapTrap    d;

    d = b;
    std::cout << std::endl;

    std::cout << "------------------------TEST 1------------------------" << std::endl;
    a.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 2------------------------" << std::endl;
    b.attack("target1");
    b.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 3------------------------" << std::endl;
    c.attack("target2");
    c.status();
    c.beRepaired(5);
    std::cout << "original:" << std::endl;
    b.status();
    std::cout << "deep copy:" << std::endl;
    c.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 4------------------------" << std::endl;
    d.status();
    d.takeDamage(11);
    d.attack("target3");
    d.status();
    d.beRepaired(5);
    d.status();
    d.takeDamage(3);
    d.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 5------------------------" << std::endl;
    for (int i = 0; i < 10; i++)
        a.attack("target4");
    a.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 6------------------------" << std::endl;
    a.attack("target4");
    a.beRepaired(5);
    a.takeDamage(3);
    a.status();
    std::cout << std::endl;

    return (0);
}