/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 08:38:03 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/11 10:04:53 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#define SUP_ATT 50


#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string Name);
    ~ScavTrap(void);
    ScavTrap  &operator=(ScavTrap const &rhs);

    void vaulthunter_dot_exe(std::string const & target);
};

#endif // SCAVTRAP

