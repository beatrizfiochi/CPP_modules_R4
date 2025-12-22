/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:35:35 by bfiochi-          #+#    #+#             */
/*   Updated: 2025/12/22 11:17:43 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
	public:
		HumanA(std::string newName, Weapon &newWeapon);
		~HumanA(void);
		void attack(void) const;
	private:
		std::string name;
		Weapon	&weapon;
};

#endif
