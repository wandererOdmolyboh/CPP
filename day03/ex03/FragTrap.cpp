/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 08:48:44 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/11 10:04:05 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
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
    std::cout << "FragTrap::Luke, I am your father" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string _name)
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
    std::cout << "FragTrap::You creat something.... maybe or no" << std::endl;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap::Bye, man, woomen or something another" << std::endl;
    return ;
}

FragTrap &FragTrap::operator= (FragTrap const &f)
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


void FragTrap::PonyAttack(double damge)
{
    this->Hit_points -= damge;
    if (this->Hit_points <= damge)
    {
        this->Hit_points = 0;
        std::cout << this->Name + " Ponny kill" << std::endl;
        return ;
    }
    std::cout << this->Name + " Damage Pony: " <<  damge << std::endl;
}

void FragTrap::UnitAttack(double damge)
{
    this->Hit_points -= damge;
    if (this->Hit_points <= damge)
    {
        this->Hit_points = 0;
        std::cout << this->Name + " -42" << std::endl;
        return ;
    }
    std::cout << this->Name + " Forbidden function damage: " <<  damge << std::endl;
}

void FragTrap::MegAttack()
{
    this->Hit_points -= SUP_ATT;
    if (this->Hit_points <= SUP_ATT)
    {
        this->Hit_points = 0;
        std::cout << this->Name + " MegAttack kill" << std::endl;
        return ;
    }
    std::cout << this->Name + " Damage MegAttack: " <<  SUP_ATT << std::endl;
}

void FragTrap::BoltAttack(double damge)
{
    this->Hit_points -= damge;
    if (this->Hit_points <= damge)
    {
        this->Hit_points = 0;
        std::cout << this->Name + " Bolt kill" << std::endl;
        return ;
    }
    std::cout << this->Name + " Damage Boltom: " <<  damge << std::endl;
}

void FragTrap::BulletAttack(double damge)
{
    this->Hit_points -= damge;
    if (this->Hit_points <= damge)
    {
        this->Hit_points = 0;
        std::cout << this->Name + " Bullet kill" << std::endl;
        return ;
    }
    std::cout << this->Name + " Damage P Bullet: " <<  damge << std::endl;;
}


void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int i = 0;
    int damge = rand();

    if (this->Energy_points > 25)
    {
        rangedAttack(target);
        i = rand() % 5;
        if (i == 0)
        {
            PonyAttack(damge % 10);
        }
        else if (i == 1)
        {
            UnitAttack(damge % 42);

        }
        else if (i == 2)
        {
            MegAttack();

        }
        else if (i == 3)
        {
            BoltAttack(damge % 8);

        }
        else if (i == 4)
        {
             BulletAttack(damge % 30);
        }
    }
    else
    {
        std::cout << "So many energy points" << std::endl;
        return ;
    }
    this->Energy_points -= 25;
}
