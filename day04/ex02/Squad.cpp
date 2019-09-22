/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 08:31:24 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/22 15:09:42 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	this->count = 0;
	this->list = NULL;
}

Squad::~Squad()
{

}

int	Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	return (this->list->objct);
}

int Squad::push(ISpaceMarine *obj)
{
	s_squad *tmp;

	this->count++;
	
	if (this->list == NULL)
	{
		this->list = new s_squad;
		this->list->objct = obj;
		this->list->next = NULL;
	}
	else
	{
		tmp = list;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new s_squad;
		tmp->objct = obj;
		tmp->next->next = NULL;
	}
	return (1);
}
