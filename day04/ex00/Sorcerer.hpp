/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:44:48 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 11:40:57 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
	private :
	std::string Name;
	std::string Title;
	public :
	/***Constructs***/
	Sorcerer();
	Sorcerer(const std::string &name, const std::string &title);
	~Sorcerer();
	/***Overloads***/
	Sorcerer  &operator=(const Sorcerer &sorc);
	/***Getters***/
	std::string get_Name() const;
	std::string get_Title() const;
	/***Settters***/
	void	set_Name(const std::string &name);
	void	set_Title(const std::string &title);
	/***Method***/
	void polymorph(Victim const &) const;
};
std::ostream	&operator<<(std::ostream &out, Sorcerer const &in);

#endif