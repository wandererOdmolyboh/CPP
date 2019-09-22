/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:37:27 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 15:06:24 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(int type, std::string name) : type(type), name(name)
{
	return ;
}

Zombie::~Zombie()
{
	return ;
}

void Zombie::anons()
{
	std::cout << "<" + name + " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}

// void Zombie::Set_type(int t)
// {
// 	type = t;
// }