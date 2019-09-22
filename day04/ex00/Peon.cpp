/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 12:09:45 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 11:40:01 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
	set_Name("Zog!");
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const std::string &name)
{
	set_Name(name);
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << this->get_Name()+ "has been turned into a pink pony !" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Peon const &in)
{
	out << "I m " + in.get_Name() + " and I like otters !" << std::endl;
	return (out);
}
