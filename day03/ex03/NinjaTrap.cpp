/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 08:19:18 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/11 10:04:32 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	Name = "Dart";
	Level = 1;
	Hit_points = 60;
	Max_hit_points = 60;
	Energy_points = 120;
	Max_energy_points = 120;
	Melee_attack_damage = 60;
	Ranged_attack_damage = 5;
	Armor_damage_reduction = 0;
	std::cout << "NinjaTrap::Luke, I am your father" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name)
{
	Name = name;
	Level = 1;
	Hit_points = 60;
	Max_hit_points = 60;
	Energy_points = 120;
	Max_energy_points = 120;
	Melee_attack_damage = 60;
	Ranged_attack_damage = 5;
	Armor_damage_reduction = 0;
	std::cout << "NinjaTrap::Luke, I am your father" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap::Bye, man, woomen or something another" << std::endl;
	return ;
}

NinjaTrap &NinjaTrap::operator= (NinjaTrap const &f)
{
	this->Name = f.Name;
	this->Level = f.Level;
	this->Hit_points = f.Hit_points;
	this->Max_hit_points = f.Max_hit_points;
	this->Energy_points = f.Energy_points;
	this->Max_energy_points = f.Max_energy_points;
	this->Melee_attack_damage = f.Melee_attack_damage;
	this->Ranged_attack_damage = f.Ranged_attack_damage;
	this->Armor_damage_reduction = f.Armor_damage_reduction;
	return (*this);
}

void NinjaTrap::ninjaShoebox(NinjaTrap ninja)
{
	std::cout << "Ninga:: " << ninja.Get_Name() << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap clap)
{
	std::cout << "Clap:: " << clap.Get_Name()<< std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap frag)
{
	std::cout << "Frag:: " << frag.Get_Name() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap scav)
{
	std::cout << "Scav:: " << scav.Get_Name() << std::endl;
}
