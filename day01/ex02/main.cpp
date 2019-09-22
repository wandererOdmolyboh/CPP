/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:37:23 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 15:29:55 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>
int main()
{
	// Zombie *zom1;
	// Zombie *zom2;
	ZombieEvent ev;

	// ev.setZombieType(1);
	// zom1 = ev.randomChump();
	// zom1->anons();
	// delete(zom1);
	// ev.setZombieType(4);
	// zom2 = ev.randomChump();
	// zom2->anons();
	// delete (zom2);

	Zombie *z;
	ev.setZombieType(1);
	// z = ev.creat_zombie("oiu");
	z = ev.randomChump();

	z->anons();
	return (0);
}