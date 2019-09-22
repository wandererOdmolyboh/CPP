/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:02:19 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/11 10:03:19 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    Name = "Dart";
    Level = 1;
    Hit_points = 100;
    Max_hit_points = 100;
    Energy_points = 50;
    Max_energy_points = 50;
    Melee_attack_damage = 20;
    Ranged_attack_damage = 15;
    Armor_damage_reduction = 3;
    std::cout << "Luke, I am your father" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string _name)
{
    Name = _name;
    Level = 1;
    Hit_points = 100;
    Max_hit_points = 100;
    Energy_points = 50;
    Max_energy_points = 50;
    Melee_attack_damage = 20;
    Ranged_attack_damage = 15;
    Armor_damage_reduction = 3;
    std::cout << "You creat something.... maybe or no" << std::endl;
    return ;
}
/*
• Hit points (100)
• Max hit points (100)
• Energy points (100)
• Max energy points (100)
• Level (1)
• Name (Parameter of constructor)
• Melee attack damage (30)
• Ranged attack damage (20)
• Armor damage reduction (5)
*/

ScavTrap::~ScavTrap(void)
{
    std::cout << "Bye, man, woomen or something another" << std::endl;
    return ;
}

ScavTrap &ScavTrap::operator= (ScavTrap const &f)
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

/**************************************/


void ScavTrap::vaulthunter_dot_exe(std::string const & target)
{
    int i = 0;


   // rangedAttack(target);
    i = rand() % 5;
    if (i == 0)
    {
        std::cout << "Take pizza in kuhnya" << std::endl;
    }
    else if (i == 1)
    {
        std::cout << "Go to the yard" << std::endl;

    }
    else if (i == 2)
    {
         std::cout << "Go PS" << std::endl;
    }
    else if (i == 3)
    {
         std::cout << "Yankee go home" << std::endl;

    }
    else if (i == 4)
    {
         std::cout << "I am not you father" << std::endl;
    }
}
