/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:53:38 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/19 14:38:52 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i=0; i<100; i++)
		this->ideas[i] = "";
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain &copy)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if(this != &copy)
	{
		for (int i=0; i<100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}


Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}


void Brain::setIdea(int index, std::string idea)
{
	if(index >= 0 && index < 100)
		this->ideas[index] = idea;
	else
		std::cout << "Invalid index to set idea" << std::endl;
}


std::string Brain::getIdea(int index) const
{
	if(index >= 0 && index < 100)
		return (this->ideas[index]);
	else
		return ("Invalid index to get idea");
}


