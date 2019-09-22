/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 18:12:33 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/01 09:15:43 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :name(name)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::attack()
{
	std::cout << Get_name() + " attaks with his " + this->weapon->getType() << std::endl;
}

void
HumanB::setWeapon(Weapon& w)
{
	this->weapon = &w;
	return ;
}

std::string HumanB::Get_name()
{
	return(this->name);
}
