/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:08:56 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/13 19:30:05 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int _fixedPointValue;
        static int const _fractionalBits = 8; 
    public:
        Fixed(void);
        Fixed(const Fixed &copy);
        Fixed& operator=(const Fixed &copy);
        ~Fixed(void);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif