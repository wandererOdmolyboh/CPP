/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 08:31:39 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/22 10:46:35 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &ter)
{
	*this = ter;
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT ! "<< std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
ISpaceMarine *TacticalMarine::clone()	const
{
	ISpaceMarine	*ret = new TacticalMarine(*this);
	return (ret);
}
