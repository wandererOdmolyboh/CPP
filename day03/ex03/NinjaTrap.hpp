/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 08:19:40 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/11 10:04:41 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
  public:
    NinjaTrap(void);
    NinjaTrap(std::string Name);
    ~NinjaTrap(void);
    NinjaTrap  &operator=(NinjaTrap const &rhs);

    void ninjaShoebox(NinjaTrap ninja);
    void ninjaShoebox(ClapTrap clap);
    void ninjaShoebox(FragTrap frag);
    void ninjaShoebox(ScavTrap scav);
};