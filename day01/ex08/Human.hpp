/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 11:44:31 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/12 18:05:15 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include "iostream"
#define ATACK_N 3


class Human
{
	private:
	void	meleeAttack(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	intimidatingShout(std::string const & target);
	
	public:
	std::string name;
	Human (std::string name);
	~Human();
	void	action(std::string const & action_name, std::string const & target);
};

struct t_attack
{
	std::string		name;
	void			(Human::*func)(std::string const &);
};

#endif