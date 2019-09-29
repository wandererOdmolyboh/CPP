/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:24:46 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/27 17:55:19 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure ()
{
	this->setType("Cure");
	this->setXP(0);
}

Cure::Cure (std::string const & type)
{
	this->setType(type);
	this->setXP(0);
}

Cure::Cure (const Cure &input)
{
	this->setType(input.getType());
	this->setXP(input.getXP());
}

Cure &Cure::operator=(const Cure &input)
{
	this->setType(input.getType());
	this->setXP(input.getXP());
	return (*this);
}

Cure::~Cure ()
{
	
}

Cure	*Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + " wounds *" << std::endl;
}
