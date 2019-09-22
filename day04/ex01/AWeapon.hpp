/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:49:35 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 16:28:58 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	public:
	
		/***Constructs***/
		AWeapon();
		AWeapon(int apcost, int damage);
		AWeapon(std::string const & name);
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
	/***Overloads***/
		AWeapon  &operator=(const AWeapon &sorc);
	/***Getters*****/
		std::string  getName() const;
		int getAPCost() const;
		int getDamage() const;
	/***Settters****/
		void setName(std::string name);
		void setAPCost(int apcost);
		void setDamage(int damage);
	/***Method****/
	virtual	void attack() const;


	private:
	std::string		name;
		int			apcost;
		int			damage;
};
#endif
std::ostream	&operator<<(std::ostream &out, AWeapon const &in);
