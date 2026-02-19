/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 10:46:32 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/19 15:00:07 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *catBrain;
	public:
		Cat(void);
		Cat(const Cat &copy);
		Cat& operator=(const Cat &copy);
		~Cat(void);
		void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif
