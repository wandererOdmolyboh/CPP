/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:53:35 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/11 09:54:06 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    Name = "Dart";
    Level = 1;
    Hit_points = 100;
    Max_hit_points = 100;
    Energy_points = 100;
    Max_energy_points = 100;
    Melee_attack_damage = 30;
    Ranged_attack_damage = 20;
    Armor_damage_reduction = 5;
    std::cout << "Luke, I am your father" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string _name)
{
    Name = _name;
    Level = 1;
    Hit_points = 100;
    Max_hit_points = 100;
    Energy_points = 100;
    Max_energy_points = 100;
    Melee_attack_damage = 30;
    Ranged_attack_damage = 20;
    Armor_damage_reduction = 5;
    std::cout << "You creat something.... maybe or no" << std::endl;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Bye, man, woomen or something another" << std::endl;
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

void FragTrap::rangedAttack(std::string const & target)
{
       std::cout << target << " under attack" <<std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
     std::cout << target << " under melee attack" <<std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->Hit_points > 0)
    {
        this->Hit_points = Hit_points - amount;
        std::cout << this->Name + " cuurent HP "<< this->Hit_points << " Damage is " << amount << std::endl;
        return ;
    }
    else
    {
        std::cout << this->Name + " die....sorry" << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    this->Hit_points = this->Hit_points + amount;
    if (this->Hit_points < Max_hit_points)
        std::cout << this->Name + " cuurent HP "<< this->Hit_points << " Repaired is " << amount << std::endl;
    else
    {
        std::cout << this->Name + " alive....maybe" << std::endl;
        this->Hit_points = Max_hit_points;
    }
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


double FragTrap::Get_Hit_points()
{
    return (Hit_points);
}

double FragTrap::Get_Max_hit_points()
{
    return (Max_hit_points);
}

double FragTrap::Get_Energy_points()
{
    return (Energy_points);
}

double FragTrap::Get_Max_energy_points()
{
    return (Max_energy_points);
}

int FragTrap::Get_Level()
{
    return (Level);
}

std::string FragTrap::Get_Name()
{
    return (Name);
}

double FragTrap::Get_Melee_attack_damage()
{
    return (Melee_attack_damage);
}

double FragTrap::Get_Ranged_attack_damage()
{
    return(Ranged_attack_damage);
}

double FragTrap::Get_Armor_damage_reduction()
{
    return (Armor_damage_reduction);
}
