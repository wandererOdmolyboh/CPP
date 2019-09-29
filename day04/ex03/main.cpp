/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:02:22 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/27 17:50:06 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	// Ice *ice = new Ice("s");
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter	*zaz = new Character("zaz");
	
	AMateria	*tmp;


	tmp = src->createMateria("Ice");
	zaz->equip(tmp);
	tmp = src->createMateria("Cure");
	zaz->equip(tmp);
	
	ICharacter	*bob = new Character("bob");

	zaz->use(0, *bob);
	zaz->use(1, *bob);

	delete bob;
	delete zaz;
	delete src;

	return 0;
}
