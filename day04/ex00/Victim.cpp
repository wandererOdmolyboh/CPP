/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:45:19 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 11:32:24 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	this->Name = "Han";
	std::cout << "Some random victim called " + this->Name + " just popped !" << std::endl;
}

Victim::Victim(const std::string &name)
{
	this->Name = name;
	std::cout << "Some random victim called " + this->Name + " just popped !" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " + this->Name + " just died for no apparent reason !" << std::endl;
	return ;
}

void Victim::getPolymorphed() const
{
	std::cout << this->Name + " has been turned into a cute little sheep !" << std::endl;
}

Victim	&Victim::operator=(const Victim &sorc)
{
	this->Name = sorc.get_Name();
	return (*this);
}

void Victim::set_Name(const std::string &name)
{
	this->Name = name;
}

std::string Victim::get_Name() const
{
	return (this->Name);
}

std::ostream	&operator<<(std::ostream &out, Victim const &in)
{
	out << "I m " + in.get_Name() + " and I like otters !" << std::endl;
	return (out);
}
