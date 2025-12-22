/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:47:50 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/22 11:18:59 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
	public:
		HumanB(std::string newName);
		~HumanB(void);
		void attack(void) const;
		void setWeapon(Weapon &newWeapon);
	private:
		std::string name;
		Weapon	*weapon;
};

#endif
