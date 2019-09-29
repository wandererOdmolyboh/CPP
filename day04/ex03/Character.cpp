/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:24:27 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/27 17:48:05 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->count_elm = 0;
	for (size_t i = 0; i < BUFF_SIZE; i++)
	{
		this->inventory[i] = NULL;
	}
	this->name = "deafault name";
}

Character::Character(std::string name)
{
	this->count_elm = 0;
	for (size_t i = 0; i < BUFF_SIZE; i++)
	{
		this->inventory[i] = NULL;
	}
	this->name = name;
}

Character::~Character()
{
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (this->count_elm >= BUFF_SIZE)
		return ;
	this->inventory[this->count_elm] = m;	
	this->count_elm++;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > BUFF_SIZE)
		return ;
	if (idx >= this->count_elm)
		this->inventory[idx] = NULL;
	this->count_elm--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > BUFF_SIZE || idx < 0 || this->inventory[idx] == NULL)
		return ;
	this->inventory[idx]->use(target);
}