/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:01:36 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/11 10:02:53 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#define SUP_ATT 50

#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
    FragTrap(void);
    FragTrap(std::string Name);
    ~FragTrap(void);
    FragTrap  &operator=(FragTrap const &rhs);

    void vaulthunter_dot_exe(std::string const & target);


    void PonyAttack(double damge);
    void UnitAttack(double damge);
    void MegAttack();
    void BoltAttack(double damge);
    void BulletAttack(double damge);




};

#endif // FRAGTRAP_H
