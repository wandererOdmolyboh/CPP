/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:00:17 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/02 08:27:34 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(5) 
{
	std::cout << "Default constructor called" << std::endl; 
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl; 
	return ;
}


Fixed::Fixed(Fixed const &input)
{
	std::cout << "Copy constructor called" << std::endl; 
	*this = input;
	return;
}

Fixed	&Fixed::operator=(Fixed const &r)
{
	std::cout << "Assignment operator called" << std::endl;

	if (this != &r)
		_raw = r.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Assignment operator called" << std::endl;
	_raw = raw;
	return;
}