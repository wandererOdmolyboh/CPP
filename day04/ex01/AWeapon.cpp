/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:49:21 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 13:42:29 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	this->name = "strandge_gun";
	this->apcost = 5;
	this->damage = 15;
}

AWeapon::AWeapon(int apcost, int damage)
{
	this->name = "strandge_gun";
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::AWeapon(std::string const & name)
{
	this->name = name;
	this->apcost = 5;
	this->damage = 15;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon()
{
	std::cout << this->name << " destroyer" << std::endl;
}

/***Overloads***/
AWeapon  &AWeapon::operator=(const AWeapon &sorc)
{
	this->name = sorc.getName();
	return (*this);
}

/***Getters*****/
std::string  AWeapon::getName() const
{
	return (name);
}

int AWeapon::getAPCost() const
{
	return (apcost);
}

int AWeapon::getDamage() const
{
	return (damage);
}
/***Settters****/
void AWeapon::setName(std::string name)
{
	this->name = name;
}

void AWeapon::setAPCost(int apcost)
{
	this->apcost = apcost;
}

void AWeapon::setDamage(int damage)
{
	this->damage = damage;
}

/***Meod****/
void AWeapon::attack() const
{
	std::cout<< this->name << " type weapon^ attacked you" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, AWeapon const &in)
{
	out << in.getName() + " type weapon, " << in.getAPCost() << " ap cost, " << in.getDamage() << " is damage" << std::endl;
	return (out);
}
