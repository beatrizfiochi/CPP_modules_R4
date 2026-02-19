/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:15:15 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/19 14:40:01 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal &copy);
		Animal& operator=(const Animal &copy);
		virtual ~Animal(void);
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif

// Virtual methods enable runtime polymorphism.
// Without 'virtual', the function call is resolved at compile time,
//  based on the pointer type (static binding).
// With 'virtual', the call is resolved at runtime,
//  based on the real object type (dynamic binding).
// If a class is used polymorphically, its destructor must be virtual
//  to avoid undefined behavior when deleting through a base pointer.


