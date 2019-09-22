/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:35:18 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 18:00:14 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Brain.hpp"
class Human
{
	public:
	Human();
	~Human();
	std::string identify();
	Brain getBrain(void);
	private: 
	Brain brain;
};

#endif