/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:09:52 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/20 14:10:48 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int main(void)
{
    ScavTrap    a("Beatriz");
    ScavTrap    b(a);
    ScavTrap    c;
    ScavTrap    d("Daniel");

    c = a;
    std::cout << std::endl;

    std::cout << "------------------------TEST 1------------------------" << std::endl;
    a.attack("target1");
    a.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 2------------------------" << std::endl;
    b.attack("target2");
    b.status();
    b.beRepaired(5);
    b.guardGate();
    std::cout << "original:" << std::endl;
    a.status();
    std::cout << "deep copy:" << std::endl;
    b.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 3------------------------" << std::endl;
    c.status();
    c.takeDamage(110);
    c.attack("target3");
    c.status();
    c.beRepaired(50);
    c.guardGate();
    c.status();
    c.takeDamage(30);
    c.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 4------------------------" << std::endl;
    for (int i = 0; i < 50; i++)
        d.attack("target4");
    d.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 5------------------------" << std::endl;
    a.status();
    a.attack("target4");
    a.beRepaired(5);
    a.takeDamage(3);
    a.guardGate();
    a.status();
    std::cout << std::endl;

    return (0);
}
