/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:51:57 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 18:01:16 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	setstr();
}

Brain::~Brain()
{
	
}

void Brain::setstr(void)
{
	std::stringstream	rez;

	rez << this;
	this->str = rez.str();
	return ;
}

std::string Brain::getstr()
{
	return (str);
}

std::string Brain::identify()
{
	return (getstr());
}