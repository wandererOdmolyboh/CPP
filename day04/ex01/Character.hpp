/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:52:15 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/22 11:21:20 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
	private:
		std::string name;
		int AP;
		AWeapon *weapon;
	public:
		Character(std::string const & name);
		~Character();
		
		
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*&);
		
		std::string getName() const;
		void setName(std::string);
		
		int getAP() const;
		void setAP(int ap);
		
		AWeapon *getWaapon() const;
		void setWeapon(AWeapon *weapon);
};
std::ostream	&operator<<(std::ostream &out, Character const &in);
#endif