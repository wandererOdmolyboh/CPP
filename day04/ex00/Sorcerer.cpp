/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:45:00 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 11:47:43 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	this->Name = "Graphist";
	this->Title = "Kiiller mac";
	std::cout << this->Name + ", " + this->Title + ", is born !"<< std::endl; 
}


Sorcerer::Sorcerer(const std::string &name, const std::string &title)
{
	this->Name = name;
	this->Title = title;
	std::cout << this->Name + ", " + this->Title + ", is born !"<< std::endl; 
}

Sorcerer::~Sorcerer()
{
	std::cout << this->Name + ", " + this->Title + ", is dead. Consequences will never be the same !"<< std::endl; 
}

void Sorcerer::polymorph(const Victim &vic) const
{
	vic.getPolymorphed();
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &sorc)
{
	this->Name = sorc.get_Name();
	this->Title = sorc.get_Title();
	return (*this);
}

void	Sorcerer::set_Name(const std::string &name)
{
	this->Name = name;
}

void	Sorcerer::set_Title(const std::string &title)
{
	this->Title = title;
}

std::string	Sorcerer::get_Name() const
{
	return (this->Name);
}

std::string	Sorcerer::get_Title() const
{
	return (this->Title);
}


std::ostream	&operator<<(std::ostream &out, const Sorcerer &in)
{
	out << "I am " + in.get_Name() + ", " + in.get_Title() + ", and I like ponies !" << std::endl;
	return (out);
}
