/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:37:30 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 16:51:35 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{

	public:
		Zombie();
		~Zombie();
		void anons();
		void Set_type(int t);
		void setZombie_Type(int type);
		void setZombie_Name(std::string name);
	private:
		int type;
		std::string name;
};


#endif