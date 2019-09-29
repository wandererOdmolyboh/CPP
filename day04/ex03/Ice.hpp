/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:25:11 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/27 16:28:50 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice (std::string const & type);
		Ice (const Ice &input);
		Ice ();
		Ice &operator=(const Ice &rhs);
		~Ice ();
		Ice	*clone() const;
		void use(ICharacter& target);
};

#endif