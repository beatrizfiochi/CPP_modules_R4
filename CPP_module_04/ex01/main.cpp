/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:42:29 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/19 15:48:21 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main(void)
{
    {
        std::cout << "########## Subject test ##########" << std::endl;

        const Animal *j = new Dog();
        const Animal *i = new Cat();

        delete j;
        delete i;
    }
    {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "########## Array test ##########" << std::endl;

        const int arraySize = 4;
        Animal *animals[arraySize];

        for (int i = 0; i < arraySize; i++)
        {
            if(i < arraySize/2)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }

        for (int i = 0; i < arraySize; i++)
            animals[i]->makeSound();

        for (int i = 0; i < arraySize; i++)
            delete(animals[i]);
    }
    {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "########## Deep copy test ##########" << std::endl;
        Cat tutu;
        tutu.getBrain()->setIdea(0, "I love churu!");
        Cat ada(tutu);
        std::cout << "Tutu's idea: " << tutu.getBrain()->getIdea(0) << std::endl;
        std::cout << "Ada's idea: " << ada.getBrain()->getIdea(0) << std::endl;
        ada.getBrain()->setIdea(0, "I need to sleep all day!");
        std::cout << "Tutu's idea: " << tutu.getBrain()->getIdea(0) << std::endl;
        std::cout << "Ada's idea: " << ada.getBrain()->getIdea(0) << std::endl;
    }
    
    return 0;
}
