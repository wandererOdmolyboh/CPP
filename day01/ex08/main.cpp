/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 11:44:27 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/01 12:35:24 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int				main(void)
{
	Human		stevej("dmolyboh");
	Human		stevew("dmolyboh");

	stevej.action("meleeAttack", "Unit");
	stevej.action("rangedAttack", "Unit");

	stevew.action("intimidatingShout", "Unit");
	return (0);
}