/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 18:12:39 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 20:40:43 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->type = str;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string Weapon::getType()
{
	return (this->type);
}

 void Weapon::setType(std::string type)
 {
	this->type = type;
 }
 