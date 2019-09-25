/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 08:31:49 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/22 16:48:18 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#ifndef TACTICAlMARINE_HPP
# define TACTICAlMARINE_HPP
class TacticalMarine : public ISpaceMarine
{
	private:
		/* data */
	public:
		TacticalMarine(/* args */);
		~TacticalMarine();
		TacticalMarine(TacticalMarine const &ter);
		
		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};
#endif

