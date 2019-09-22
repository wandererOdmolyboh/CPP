/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 11:44:34 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/12 18:06:01 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


Human::Human (std::string name) : name(name)
{
	return ;
}

Human::~Human()
{
	return ;
}

void Human::meleeAttack(std::string const & target)
{
	std::cout << name << " melee attack " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << name << " ranged attack " << target <<std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << name << " intimidating shout" << target << std::endl;
}



void Human::action(std::string const & action_name, std::string const & target)
{

static	t_attack		atcks[] = 
	{
		{"meleeAttack", &Human::meleeAttack},
		{"rangedAttack", &Human::rangedAttack},
		{"intimidatingShout", &Human::intimidatingShout}
	};
	int i = 0;
	while (++i < ATACK_N)
	{
		if (action_name == atcks[i].name)
		{
			(this->*atcks[i].func)(target);
		}
	}
}