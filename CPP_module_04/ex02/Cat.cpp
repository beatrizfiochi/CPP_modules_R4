/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 10:47:31 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/19 16:18:08 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal(), catBrain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy), catBrain(new Brain(*copy.catBrain))
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		if (this->catBrain)
			delete(this->catBrain);
		this->catBrain = new Brain(*copy.catBrain); //deep copy
	}
	return (*this);
}


Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete(this->catBrain);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->catBrain);
}

