/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:50:31 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 17:38:22 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"


PowerFist::PowerFist()
{
	this->setName("Power Fist");
	this->setDamage(50);
	this->setAPCost(8);
	return ;
}

PowerFist::~PowerFist()
{
	std::cout << this->getName() << " destroyer" << std::endl;
}

/***Overloads***/
PowerFist  &PowerFist::operator=(const PowerFist &sorc)
{
	this->setName(sorc.getName());
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}