/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:25:03 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/27 17:54:46 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice ()
{
	this->setType("Ice");
	this->setXP(0);
}

Ice::Ice (std::string const & type)
{
	this->setType(type);
	this->setXP(0);
}

Ice::Ice (const Ice &input)
{
	this->setType(input.getType());
	this->setXP(input.getXP());
}

Ice &Ice::operator=(const Ice &input)
{
	this->setType(input.getType());
	this->setXP(input.getXP());
	return (*this);
}

Ice::~Ice ()
{
	
}

Ice	*Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
	