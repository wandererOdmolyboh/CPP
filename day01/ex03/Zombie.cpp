/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:37:27 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 16:51:29 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	return ;
}

void Zombie::anons()
{
	std::cout << "<" + name + " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}
void Zombie::setZombie_Type(int type)
{
	this->type = type;
}

void Zombie::setZombie_Name(std::string name)
{
	this->name = name;
}

void Zombie::Set_type(int t)
{
	type = t;
}