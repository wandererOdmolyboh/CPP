/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:37:37 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 14:48:11 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include <iostream>
#include "Zombie.hpp"
#define MAKS_Z 7

class ZombieEvent
{

	public:
		Zombie *creat_zombie(std::string name);
		Zombie *randomChump();
		void setZombieType(int type);
	private: int type_e;
};


#endif