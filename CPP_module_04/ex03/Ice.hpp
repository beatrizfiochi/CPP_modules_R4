/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:22:50 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/20 14:14:26 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>
# include <string>

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice &copy);
        Ice &operator=(const Ice &copy);
        ~Ice(void);

        Ice *clone(void) const;
        void use(ICharacter &target);
};

#endif
