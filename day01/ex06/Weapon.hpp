/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 18:13:02 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 20:45:02 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include "iostream"

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string str);
	~Weapon();
	std::string getType(); //that returns a const reference to this string
	void setType(std::string type);
};

#endif
// Make a Weapon class, that has a type string, and a getType . Also has a setType.