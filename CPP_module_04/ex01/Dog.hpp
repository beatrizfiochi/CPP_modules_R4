/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:52:44 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/19 15:11:58 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *dogBrain;
	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog& operator=(const Dog &copy);
		~Dog(void);
		void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif
