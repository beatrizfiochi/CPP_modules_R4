/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:37:33 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/22 10:28:49 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

# define MAX_FLOOR 1024

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *slots[4];
        AMateria *floor[MAX_FLOOR];
        int floorIdx;
    public:
        Character(void);
        Character(std::string const &name);
        Character(const Character &copy);
        Character& operator=(Character const &copy);
        ~Character(void);

        std::string const &getName(void) const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif
