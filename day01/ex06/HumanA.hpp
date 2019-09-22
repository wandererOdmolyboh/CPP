/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 18:12:28 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/01 09:04:46 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&weapon;
		std::string	name;
	public:
		HumanA(std::string name, Weapon &weap);
		~HumanA();
		void attack();
		Weapon Get_weapon();
		std::string Get_name();
};

#endif