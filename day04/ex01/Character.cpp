/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:52:21 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/22 11:25:37 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->name = name;
	this->weapon = NULL;
	this->AP = 40;
}

Character::~Character()
{
	// if (this->weapon)
	// 	delete (this->weapon);
}


void Character::recoverAP()
{
	int	AP;
	if (this->AP < 40)
		AP = this->AP + 10;
	if (this->AP > 40)
		AP = 40;
	this->setAP(AP);	
}

void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
	return ;
}

void Character::attack(Enemy*& enemy)
{
	int hp_enemy;

	if (this->weapon == NULL)
		return ;
	if (enemy == NULL)
		return ;
	this->AP -= this->weapon->getAPCost();
	if (AP > 0)
	{
		hp_enemy = enemy->getHP() - this->weapon->getDamage();
		std::cout << this->name + " attacks " + enemy->getType() + " with a " + this->weapon->getName() << std::endl;
		this->weapon->attack();
		enemy->setHP(hp_enemy);
		if (hp_enemy <= 0)
		{
			delete enemy;
			enemy = NULL;
		}
	}
}

std::string Character::getName() const
{
	return (this->name);
}

void Character::setName(std::string name)
{
	this->name = name;
}

int Character::getAP() const
{
	return (this->AP);
}

void Character::setAP(int ap)
{
	this->AP = ap;
}

AWeapon *Character::getWaapon() const
{
	return (this->weapon);
}
void Character::setWeapon(AWeapon *weapon)
{
	this->weapon = weapon;
}

std::ostream	&operator<<(std::ostream &out, Character const &in)
{
	if (in.getWaapon() != NULL)
	{
		out << in.getName() + " has " << in.getAP() << " AP and wields a " + in.getWaapon()->getName() << std::endl;
	}
	else
	{
		out << in.getName() + " has " << in.getAP() << " AP and wis unarmed" << std::endl;
	}
	return (out);
}