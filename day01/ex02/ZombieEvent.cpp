/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:37:34 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 16:27:22 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"


Zombie *ZombieEvent::creat_zombie(std::string name)
{
	return (new Zombie(type_e, name));
}

void ZombieEvent::setZombieType(int type)
{
	type_e = type;
}

Zombie *ZombieEvent::randomChump()
{
	int name;
	std::string names [] = {"Checker", "Moilinetta", "Rick", "Morty", "Mortus", "Main", "zombeer"};

	name = rand() % MAKS_Z;
	return (this->creat_zombie(names[name]));
}
