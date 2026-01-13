/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:49:09 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/13 20:13:46 by bfiochi-         ###   ########.fr       */
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

        Fixed(const int n);
        Fixed(const float f);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif