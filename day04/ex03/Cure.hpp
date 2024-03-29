/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:24:55 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/27 16:28:44 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
        Cure ();
		Cure (std::string const & type);
		Cure (const Cure &input);
		Cure &operator=(const Cure &rhs);
		~Cure ();
		Cure	*clone() const;
		void use(ICharacter& target);
};


#endif