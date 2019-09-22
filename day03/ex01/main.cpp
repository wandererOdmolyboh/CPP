/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:52:52 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/11 09:52:54 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

static void print_parms(FragTrap *obj)
{
    std::cout << "________________________________________________" << std::endl;
    std::cout << "Name: " << obj->Get_Name() << std::endl;
    std::cout << "Hit_points: " << obj->Get_Hit_points() << std::endl;
    std::cout << "Energy_points: " << obj->Get_Energy_points() << std::endl;
    std::cout << "Melee_attack_damage: " << obj->Get_Melee_attack_damage() << std::endl;
    std::cout << "Ranged_attack_damage: " << obj->Get_Ranged_attack_damage() << std::endl;
    std::cout << "Armor_damage_reduction: " << obj->Get_Armor_damage_reduction() << std::endl;
    std::cout << "________________________________________________" << std::endl;
}

int main()
{
    /***Luke***/
    FragTrap Dart;
    print_parms(&Dart);
    Dart.rangedAttack("test");
    Dart.takeDamage(5);
    print_parms(&Dart);
    Dart.beRepaired(2);
    print_parms(&Dart);
    Dart.vaulthunter_dot_exe(Dart.Get_Name());
    print_parms(&Dart);
    return (0);
};