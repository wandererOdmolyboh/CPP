/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:37:37 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 17:01:45 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include <iostream>
#include "Zombie.hpp"
#define MAKS_Z 7

class ZombieHorde
{

	public:
		ZombieHorde();
		ZombieHorde(int n);
		Zombie *Creat_Zombie(std::string name);
		std::string RandomName();
		void announce();

	private:
	int N;
	Zombie *zomb;

};


#endif