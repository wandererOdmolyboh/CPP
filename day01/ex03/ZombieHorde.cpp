/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:37:34 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 17:02:28 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"


std::string		ZombieHorde::RandomName()
{
	int name;
	std::string names [] = {"Checker", "Moilinetta", "Rick", "Morty", "Mortus", "Main", "zombeer"};

	name = rand() % MAKS_Z;
	return (names[name]);
}

ZombieHorde::ZombieHorde()
{
	return ;
}

ZombieHorde::ZombieHorde(int n): N(n)
{
	this->zomb = new Zombie[n];

	for (int i = 0; i < this->N; i += 1)
	{
		this->zomb[i].setZombie_Type(i);
		this->zomb[i].setZombie_Name(RandomName());
	}
	return ;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->N; i += 1)
	{
		this->zomb[i].anons();
	}
}
