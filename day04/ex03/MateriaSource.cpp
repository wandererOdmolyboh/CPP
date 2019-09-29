/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:55:41 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/27 17:51:44 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->count_elm = 0;
	for (size_t i = 0; i < BUFF_SIZE; i++)
	{
		this->inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource &obj)
{
	for (size_t i = 0; i < BUFF_SIZE; i++)
	{
		this->inventory[i] = obj.inventory[i];
	}
	return;
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria *materia)
{
	// if (this->count_elm >= BUFF_SIZE)
	// 	return ;
	this->inventory[this->count_elm] = materia;
	this->count_elm++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	
	for (int i = 0; i < this->count_elm; i++)
	{
		if (this->inventory[i]->getType() == type)
		{
			return (this->inventory[i]->clone());
		}
	}
	return (NULL);
}