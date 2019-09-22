/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:00:17 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/02 14:39:40 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::point = 8;

Fixed::Fixed() : value(0)
{
	// std::cout << "Default constructor called" << std::endl; 
	return ;
}

Fixed::Fixed(const Fixed  &input)
{
	*this = input;
	// std::cout << "Copy constructor called" << std::endl; 
	return;
}

Fixed::Fixed(const int input)
{
	this->value = input << this->point;
	// std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float input)
{
	// std::cout << "Float constructor called" << std::endl;
	this->value = roundf(input * (1 << point));
	return;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl; 
	return ;
}

Fixed	&Fixed::operator=(Fixed const &r)
{
	if (this != &r)
		this->value = r.getRawBits();
	// std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

Fixed               &Fixed::operator++(void)
{
	this->value += 1;
	return (*this);
}
	
Fixed               &Fixed::operator--(void)
{
	this->value -= 1;
	return (*this);
}

Fixed               Fixed::operator++(int)
{
	Fixed oldValue(*this); 
	this->value += 1;
	return (oldValue);
}

Fixed               Fixed::operator--(int)
{
	Fixed oldValue(*this); 
	this->value -= 1;
	return (oldValue);
}

bool                Fixed::operator>(const Fixed &rhs) const
{
	if (this->value > rhs.value)
		return (true);
	return (false);	
}

bool                Fixed::operator<(const Fixed &rhs) const
{
	if (this->value < rhs.value)
		return (true);
	return (false);		
}

bool                Fixed::operator>=(const Fixed &rhs) const
{
	if (this->value >= rhs.value)
		return (true);
	return (false);		
}

bool                Fixed::operator<=(const Fixed &rhs) const
{
	if (this->value <= rhs.value)
		return (true);
	return (false);		
}

bool                Fixed::operator==(const Fixed &rhs) const
{
	if (this->value == rhs.value)
		return (true);
	return (false);		
}

bool                Fixed::operator!=(const Fixed &rhs) const
{
	if (this->value != rhs.value)
		return (true);
	return (false);		
}

Fixed               Fixed::operator+(const Fixed &rhs) const
{
	return((Fixed)(this->toFloat() + rhs.toFloat()));	
}

Fixed               Fixed::operator-(const Fixed &rhs) const
{
	return((Fixed)(this->toFloat() - rhs.toFloat()));
}

Fixed               Fixed::operator*(const Fixed &rhs) const
{
	return((Fixed)(this->toFloat() * rhs.toFloat()));	
}

Fixed               Fixed::operator/(const Fixed &rhs) const
{
	return((Fixed)(this->toFloat() / rhs.toFloat()));
}
	
int		Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
	return ;
}

float Fixed::toFloat(void) const
{
    return ((float)(this->value) / (1 << point));
}

int Fixed::toInt(void) const
{
	return ((int)(this->value >> point));
}

std::ostream &operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return (out);
}
