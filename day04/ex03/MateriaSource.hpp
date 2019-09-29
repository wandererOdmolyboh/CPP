/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:55:57 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/27 17:05:05 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCHE_HPP
# define MATERIASOURCHE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
    AMateria    *inventory[BUFF_SIZE];
	int         count_elm;
	public:
		MateriaSource(/* args */);
		~MateriaSource();
		MateriaSource(MateriaSource &obj);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};


#endif