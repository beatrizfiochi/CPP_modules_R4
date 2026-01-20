/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:15:23 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/20 14:47:52 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

int main(void)
{
    std::cout << "*********************ScavTrap Tests*********************" << std::endl;
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
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "*********************FragTrap Tests*********************" << std::endl;
    FragTrap f("Fabiana");
    FragTrap g(f);
    FragTrap h;

    h = f;

    std::cout << std::endl;

    std::cout << "------------------------TEST 1------------------------" << std::endl;
    f.status();
    f.attack("target5");
    f.takeDamage(5);
    f.beRepaired(3);
    f.highFivesGuys();
    f.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 2------------------------" << std::endl;
    g.attack("target6");
    g.status();
    g.beRepaired(5);
    g.highFivesGuys();
    std::cout << "original:" << std::endl;
    f.status();
    std::cout << "deep copy:" << std::endl;
    g.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 3------------------------" << std::endl;
    h.status();
    h.takeDamage(110);
    h.attack("target7");
    h.status();
    h.beRepaired(50);
    h.highFivesGuys();
    h.status();
    h.takeDamage(30);
    h.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 4------------------------" << std::endl;
    f.status();
    for (int i = 0; i < 100; i++)
        f.attack("target8");
    f.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 5------------------------" << std::endl;
    g.status();
    g.attack("target9");
    g.beRepaired(5);
    g.takeDamage(3);
    g.highFivesGuys();
    g.status();
    std::cout << std::endl;

    return (0);
}
