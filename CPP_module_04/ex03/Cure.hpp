/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:01:26 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/02/20 14:15:49 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>
# include <string>

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure &copy);
        Cure &operator=(const Cure &copy);
        ~Cure(void);

        Cure *clone(void) const;
        void use(ICharacter &target);
};

#endif
