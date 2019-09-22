/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 14:00:38 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 11:14:41 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(int age, std::string name, double weight, double height) : m_age(age), m_name(name), m_weight(weight), m_height(height)
{
	return ;
}

Pony::~ Pony (void)
{
	return ;
}

	int Pony::Get_age()
	{
		return (m_age);
	}
	double Pony::Get_weight()
	{
		return (m_weight);
	}
	double Pony::Get_height()
	{
		return (m_height);
	}
	std::string Pony::Get_name()
	{
		return (m_name);
	}
	
	void Pony::Set_age(int age)
	{
		m_age = age;
	}
	
	void Pony::Set_weight(double weight)
	{
		m_weight = weight;
	}
	
	void Pony::Set_height(double height)
	{
		m_height = height;
	}
	
	void Pony::Set_name(std::string name)
	{
		m_name = name;
	}
