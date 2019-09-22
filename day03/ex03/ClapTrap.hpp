/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 08:31:20 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/11 10:03:55 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
class ClapTrap 
{
public:
    ClapTrap();
    ClapTrap(std::string Name);
    ~ClapTrap();
    void rangedAttack(std::string const & target); // диапазон
    void meleeAttack(std::string const & target); // ближний бой
    void takeDamage(unsigned int amount); // нанести дамаг
    void beRepaired(unsigned int amount); // востановление


    /***  Getters  ***/
    double Get_Hit_points();
    double Get_Max_hit_points();
    double Get_Energy_points();
    double Get_Max_energy_points();
    int Get_Level();
    std::string Get_Name();
    double Get_Melee_attack_damage();
    double Get_Ranged_attack_damage();
    double Get_Armor_damage_reduction();


protected:
    double Hit_points;
    double Max_hit_points;
    double Energy_points;
    double Max_energy_points;
    int Level;
    std::string Name;
    double Melee_attack_damage;
    double Ranged_attack_damage;
    double Armor_damage_reduction;
};

#endif // CLAPTRAP_H
