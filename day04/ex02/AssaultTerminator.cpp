/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 08:29:53 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/22 10:43:23 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &ter)
{
	*this = ter;
	std::cout << "* teleports from space *" << std::endl;
	return;
}

ISpaceMarine *AssaultTerminator::clone()	const
{
	ISpaceMarine	*ret = new AssaultTerminator(*this);
	return (ret);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !"<< std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}