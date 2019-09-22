/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 14:00:41 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 11:14:20 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>

class Pony
{
	public:
		Pony(int age, std::string name, double weight, double height);
		~Pony(void);
	
	int Get_age();
	double Get_weight();
	double Get_height();
	std::string Get_name();
	
	void Set_age(int age);
	void Set_weight(double weight);
	void Set_height(double height);
	void Set_name(std::string nema);

// Box(int width, int length, int height)
//         : m_width(width), m_length(length), m_height(height)
		
	private:
	int			m_age;
	std::string	m_name;
	double		m_weight;
	double		m_height;
};

#endif