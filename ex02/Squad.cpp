/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 08:31:24 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/22 16:54:08 by dmolyboh         ###   ########.fr       */
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
	s_squad *tmp;

	while (count != 0)
	{
		tmp = this->list;
		this->list = this->list->next;
		free(tmp);
		count--;
	}
	
}

int	Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	int count;
	s_squad *tmp;

	tmp = this->list;
	count = this->count;

	for (int t = 0; t < count; t++ )
	{
	    if (t == i)
            return  (tmp->objct);
	    tmp = tmp->next;
	}

	return(NULL);

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
		tmp = this->list;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new s_squad;
		tmp->next->objct = obj;
		tmp->next->next = NULL;
	}
	return (1);
}
