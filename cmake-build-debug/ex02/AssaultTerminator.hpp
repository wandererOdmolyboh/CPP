/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 08:30:40 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/22 10:43:27 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

class AssaultTerminator : public ISpaceMarine
{
	private:
		/* data */
	public:
		AssaultTerminator();
		~AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &obj);
		
		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};
#endif