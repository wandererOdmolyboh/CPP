#ifndef SCAVTRAP
#define SCAVTRAP

#define SUP_ATT 50


#include <cstdlib>
#include <iostream>

class ScavTrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string Name);
    ~ScavTrap(void);
    ScavTrap  &operator=(ScavTrap const &rhs);

    void vaulthunter_dot_exe(std::string const & target);

    void rangedAttack(std::string const & target); // диапазон
    void meleeAttack(std::string const & target); // ближний бой
    void takeDamage(unsigned int amount); // нанести дамаг
    void beRepaired(unsigned int amount); // востановление

  

    double Get_Hit_points();
    double Get_Max_hit_points();
    double Get_Energy_points();
    double Get_Max_energy_points();
    int Get_Level();
    std::string Get_Name();
    double Get_Melee_attack_damage();
    double Get_Ranged_attack_damage();
    double Get_Armor_damage_reduction();

private:
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

#endif // SCAVTRAP

