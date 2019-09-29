/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:39:02 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/27 17:02:20 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		unsigned int xp_;
		std::string type;
	public:
		AMateria ();
		AMateria (std::string const & type);
		AMateria (AMateria const &input);
		AMateria &operator=(const AMateria &rhs);
		virtual ~AMateria ();
		std::string const & getType() const; //Returns the materia type
		void setXP(unsigned int xp); //Returns the Materia s XP
		void setType(std::string const type); //Returns the materia type
		unsigned int getXP() const; //Returns the Materia s XP
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
