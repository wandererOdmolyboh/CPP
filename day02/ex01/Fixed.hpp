/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:00:03 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/02 09:19:02 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int value;
		static const int point;
	public:
		Fixed(/* args */);
		~Fixed();
		Fixed(Fixed const &input);
		Fixed(float const input);
		Fixed(int const input);

		Fixed	&operator=(Fixed const &r);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void)  const;
		int		toInt(void)  const;
};
std::ostream            &operator<<(std::ostream &out, Fixed const &in);

#endif