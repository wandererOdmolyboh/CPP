/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 08:31:31 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/22 15:04:35 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP


#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{

	public:
		struct					s_squad
		{
			ISpaceMarine		*objct;
			s_squad 			*next;
		};
		Squad();
		~Squad();
		ISpaceMarine* getUnit(int i) const;
		int push(ISpaceMarine *obj);
		int	getCount() const;
	private:
		
		s_squad		*list;
		int			count;
};

#endif