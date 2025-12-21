/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 16:59:59 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/21 17:21:56 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setName(const std::string &zName);
	private:
		std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
