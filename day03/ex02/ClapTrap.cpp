/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:00:20 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/11 10:01:03 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

    
    ClapTrap::ClapTrap(void)
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
        std::cout << "ClapTrap::Luke, I am your father" << std::endl;
        return ;
    }

    ClapTrap::ClapTrap(std::string _name)
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
        std::cout << "ClapTrap::You creat something.... maybe or no" << std::endl;
        return ;
    }

    ClapTrap::~ClapTrap(void)
    {
        std::cout << "ClapTrap::Bye, man, woomen or something another" << std::endl;
        return ;
    }


    void ClapTrap::rangedAttack(std::string const & target)
    {
           std::cout << target << " under attack" <<std::endl;
    }

    void ClapTrap::meleeAttack(std::string const & target)
    {
         std::cout << target << " under melee attack" <<std::endl;
    }

    void ClapTrap::takeDamage(unsigned int amount)
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

    void ClapTrap::beRepaired(unsigned int amount)
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


    double ClapTrap::Get_Hit_points()
    {
        return (Hit_points);
    }

    double ClapTrap::Get_Max_hit_points()
    {
        return (Max_hit_points);
    }

    double ClapTrap::Get_Energy_points()
    {
        return (Energy_points);
    }

    double ClapTrap::Get_Max_energy_points()
    {
        return (Max_energy_points);
    }

    int ClapTrap::Get_Level()
    {
        return (Level);
    }

    std::string ClapTrap::Get_Name()
    {
        return (Name);
    }

    double ClapTrap::Get_Melee_attack_damage()
    {
        return (Melee_attack_damage);
    }

    double ClapTrap::Get_Ranged_attack_damage()
    {
        return(Ranged_attack_damage);
    }

    double ClapTrap::Get_Armor_damage_reduction()
    {
        return (Armor_damage_reduction);
    }

