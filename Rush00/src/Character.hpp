/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:57:18 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/28 22:13:22 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

class Character
{
	private:
		std::string	Name;
		float	Health;
		float	Damage;
	public:
		Character();
		~Character();
	/*Copliens forms*/
		/****Getters****/
		std::string	get_Name();
		float	get_Health();
		float	get_Damage();
		/****Setters****/
		void set_Name(std::string name);
		void set_Health(float health);
		void set_Damage(float damage);
};

#endif

Character::Character(/* args */)
{
}

Character::~Character()
{
}