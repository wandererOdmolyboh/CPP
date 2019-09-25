/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 08:31:16 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/22 17:24:34 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

void memory_leak(ISquad* vlc)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* tom = new AssaultTerminator;
	ISpaceMarine* ihor = new AssaultTerminator;
	// vlc->push(bob);
	// vlc->push(jim);
	// vlc->push(tom);
	// vlc->push(ihor);
}

int main()
{
	ISquad* vlc = new Squad;
	memory_leak(vlc);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	// delete bob;
	system("leaks a.out");
	return 0;
}