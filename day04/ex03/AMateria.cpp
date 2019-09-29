/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:45:38 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/27 17:53:45 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	this->xp_ = 0;
}

AMateria::AMateria()
{
	this->type = "Banan";
	this->xp_ = 0;
}

AMateria::~AMateria()
{

}

AMateria::AMateria	(AMateria const &input)
{
	this->type = input.getType();
	this->xp_ = input.getXP();
}

AMateria	&AMateria::operator=(const AMateria &input)
{
	this->type = input.getType();
	this->xp_ = input.getXP();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
} 

unsigned int AMateria::getXP() const
{
	return (this->xp_);
}

void	AMateria::setXP(unsigned int xp)
{
	this->xp_ = xp;
}

void	AMateria::setType(std::string const type)
{
	this->type = type;
}

void AMateria::use(ICharacter &target)
{
	target.getName();
	// (void)target;
	this->xp_ = this->xp_ + 10;
}
