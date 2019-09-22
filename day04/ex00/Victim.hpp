/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:45:10 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 11:39:15 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
private:
	std::string Name;
public:

	/***Constructs***/
	Victim();
	Victim(const std::string &name);
	virtual ~Victim();
	
	/***Overloads***/
	Victim  &operator=(const Victim &sorc);
	/***Getters***/
	std::string	get_Name() const;
	
	/***Settters***/
	void set_Name(const std::string &name);
	/***Method***/
	virtual void getPolymorphed() const;
	
};

std::ostream	&operator<<(std::ostream &out, Victim const &in);

#endif