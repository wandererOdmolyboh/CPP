/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:09:21 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 17:30:56 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string &s1 = s;
	std::string *s2 = &s;

	std::cout << "Reference : " + s1 << std::endl <<  "Pointer   : " + *s2 << std::endl;
	return (0);
}
