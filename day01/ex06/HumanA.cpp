/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 18:12:33 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/01 09:04:18 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) :name(name), weapon(club)
{

	return ;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack()
{
	std::cout << Get_name() + " attaks with his " + this->weapon.getType() << std::endl;
}

std::string HumanA::Get_name()
{
	return(this->name);
}
