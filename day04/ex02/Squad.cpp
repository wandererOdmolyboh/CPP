/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 08:31:24 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/22 11:01:37 by dmolyboh         ###   ########.fr       */
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

int	Squad::getCount()
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int i)
{
	
}

int Squad::push(ISpaceMarine *obj)
{
	t_squad *tmp;

	
	this->count++;
	if (this->list == NULL)
		this->list->objct = obj;
	else
	{
		tmp = list;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = obj;
		tmp->next->next = NULL;
	}
	
}
