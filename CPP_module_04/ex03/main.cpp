/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 10:16:59 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/22 14:01:03 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include <string>

void subjectTest(void)
{
    std::cout << "########## SUBJECT TEST ##########" << std::endl;
    std::cout << std::endl;

    std::cout << "### Creating Materia Source ###" << std::endl;
    IMateriaSource* src = new MateriaSource();
    std::cout << std::endl;

    std::cout << "### Learning Materias ###" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << std::endl;

    std::cout << "### Creating Characters ###" << std::endl;
    ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");
    std::cout << std::endl;

    std::cout << "### Creating and Equipping Materias ###" << std::endl;
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << std::endl;

    std::cout << "### Using Materias ###" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << std::endl;

    std::cout << "### Cleaning up ###" << std::endl;
    delete bob;
    delete me;
    delete src;
    std::cout << std::endl;
}

void MyTests(void)
{
    std::cout << "########## MY TESTS ##########" << std::endl;
    std::cout << std::endl;

    std::cout << "########## Materia learning overflow ##########" << std::endl;
    std::cout << "### Creating Materia Source ###" << std::endl;
	IMateriaSource* src2 = new MateriaSource();
    std::cout << std::endl;

    std::cout << "### Learning Materias ###" << std::endl;
	src2->learnMateria(new Ice());
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Cure());
    std::cout << std::endl;

	std::cout << "########## Materia equipping tests ##########" << std::endl;
    std::cout << "### Creating Character ###" << std::endl;
	ICharacter*	me2 = new Character("me2");
    std::cout << std::endl;

    std::cout << "### Creating and Equipping Materias ###" << std::endl;
	AMateria*	tmp2;
	tmp2 = src2->createMateria("invalid");
	me2->equip(tmp2);
	tmp2 = src2->createMateria("ice");
	me2->equip(tmp2);
	tmp2 = src2->createMateria("ice");
	me2->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	me2->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	me2->equip(tmp2);
	tmp2 = src2->createMateria("ice");
	me2->equip(tmp2);
    std::cout << std::endl;

	std::cout << "########## Destruct ##########" << std::endl;
	delete me2;
	delete src2;
}

int main(void)
{
    subjectTest();
    MyTests();

    return (0);
}
