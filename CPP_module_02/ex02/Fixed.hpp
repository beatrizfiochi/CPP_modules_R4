/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 20:22:44 by bfiochi-          #+#    #+#             */
/*   Updated: 2026/01/13 20:55:24 by bfiochi-         ###   ########.fr       */
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

        //COMPARISON OPERATORS
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        //ARITHMETIC OPERATORS
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        //INCREMENT AND DECREMENT OPERATORS
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);

        //STATIC MIN AND MAX METHODS
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed const &min(Fixed const &a, Fixed const &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif