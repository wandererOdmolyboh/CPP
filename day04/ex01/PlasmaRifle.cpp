/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:50:01 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 17:39:19 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
	this->setName("Plasma Rifle");
	this->setAPCost(5);
	this->setDamage(21);
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << this->getName() << " destroyer" << std::endl;
}

/***Overloads***/
PlasmaRifle  &PlasmaRifle::operator=(const PlasmaRifle &sorc)
{
	this->setName(sorc.getName());
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
