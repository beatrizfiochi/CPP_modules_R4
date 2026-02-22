/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:50:27 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/22 10:27:53 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(void);
        AMateria(std::string const &type);
        AMateria(const AMateria &copy);
        AMateria &operator=(const AMateria &copy);
        virtual ~AMateria(void);

        std::string const &getType(void) const; //Returns the materia type

        virtual AMateria *clone(void) const = 0; //Pure virtual
        virtual void use(ICharacter &target);
};

#endif
