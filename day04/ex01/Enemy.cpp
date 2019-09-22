/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:50:55 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 20:29:35 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	this->HP = 0;
	this->Type = "random";
}

Enemy::~Enemy()
{
	std::cout <<"Enemy"<<std::endl;
	return ;
}

void Enemy::setType(const std::string type) 
{
	this->Type = type;
}

void Enemy::setHP(int hp)
{
	this->HP = hp;
}

std::string Enemy::getType() const
{
	return (this->Type);
}

int Enemy::getHP() const
{
	return (HP);
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
}
