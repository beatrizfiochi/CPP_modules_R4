/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:15:23 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/20 15:32:15 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

int main(void)
{
    DiamondTrap a("Beatriz");
    a.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 1------------------------" << std::endl;
    a.attack("target1");
    a.takeDamage(5);
    a.beRepaired(3);
    a.highFivesGuys();
    a.guardGate();
    a.whoAmI();
    a.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 2------------------------" << std::endl;
    a.takeDamage(99);
    a.attack("target2");
    a.beRepaired(5);
    a.takeDamage(3);
    a.highFivesGuys();
    a.guardGate();
    a.whoAmI();
    a.status();
    std::cout << std::endl;

    a.takeDamage(3);
    a.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 3------------------------" << std::endl;
    DiamondTrap b("Daniel");
    b.status();
    std::cout << std::endl;

    for (int i = 0; i < 100; i++)
        b.attack("target3");
    b.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 4------------------------" << std::endl;
    b.attack("target4");
    b.beRepaired(5);
    b.takeDamage(3);
    b.highFivesGuys();
    b.guardGate();
    b.whoAmI();
    b.status();
    std::cout << std::endl;

    std::cout << "------------------------TEST 5------------------------" << std::endl;
    DiamondTrap c("Carlos");
    c.status();
    std::cout << std::endl;
    c = b;
    c.status();
    std::cout << std::endl;
    return 0;
}
