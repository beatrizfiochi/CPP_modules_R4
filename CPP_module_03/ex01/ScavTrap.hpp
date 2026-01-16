/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:10:30 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/16 15:50:35 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string const& name);
        ScavTrap(const ScavTrap &copy);
        ScavTrap& operator=(const ScavTrap &copy);
        ~ScavTrap(void);
};

#endif