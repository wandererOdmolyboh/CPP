/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:00:03 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/11 12:51:41 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public:
		int value;
		static const int point;
	public:
		Fixed(/* args */);
		~Fixed();
		Fixed(Fixed const &input);
		Fixed(float const input);
		Fixed(int const input);

    Fixed               &operator=(const Fixed &rhs);
    Fixed               &operator++(void);
    Fixed               &operator--(void);
    Fixed               operator++(int);
    Fixed               operator--(int);
    bool                operator>(const Fixed &rhs) const;
    bool                operator<(const Fixed &rhs) const;
    bool                operator>=(const Fixed &rhs) const;
    bool                operator<=(const Fixed &rhs) const;
    bool                operator==(const Fixed &rhs) const;
    bool                operator!=(const Fixed &rhs) const;
    Fixed               operator+(const Fixed &rhs) const;
    Fixed               operator-(const Fixed &rhs) const;
    Fixed               operator*(const Fixed &rhs) const;
    Fixed               operator/(const Fixed &rhs) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void)  const;
		int		toInt(void)  const;
};
std::ostream            &operator<<(std::ostream &out, Fixed &in);

#endif