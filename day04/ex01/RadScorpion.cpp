/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:51:48 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 15:47:09 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	setHP(90);
	setType("RadScorpion");
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
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