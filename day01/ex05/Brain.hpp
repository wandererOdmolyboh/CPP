/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:34:59 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 17:58:56 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <sstream>

class Brain
{
	public:
	std::string identify();
	std::string getstr();
	void setstr();
	Brain();
	~Brain();
	private:
	std::string str;

};

#endif