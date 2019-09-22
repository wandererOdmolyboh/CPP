/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 12:03:11 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 11:39:39 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim 
{
	public:
	/***Constructs***/
	Peon();
	Peon(const std::string &);
	~Peon();
	/***Overloads***/
	
	/***Getters****/
	
	/***Settters***/
	
	/***Method****/
	void getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &out, Peon const &in);

#endif