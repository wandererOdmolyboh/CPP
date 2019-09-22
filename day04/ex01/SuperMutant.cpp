/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:51:20 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 17:28:19 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	setHP(170);
	setType("Super Mutant");
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	double hp = 0;
	if (damage < 0)
		return ;
	hp = this->getHP() - damage;
	if (hp < 0)
		hp = -1;
	this->setHP(hp);
	return ;
}
