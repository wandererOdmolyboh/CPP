/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:02:55 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/02 13:23:46 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a(0);
	Fixed b(0);
	Fixed c;
	bool flag = false;
		std::cout << "++Operator++" << std::endl;
	std::cout << a.toFloat() << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a.toFloat() << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a.toFloat() << std::endl;
		std::cout << "________________________________"<< std::endl;
		std::cout << "--Operator--" << std::endl;
	std::cout << a.toFloat() << std::endl;
	std::cout << --a << std::endl;
	std::cout << a.toFloat() << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a.toFloat() << std::endl;
		std::cout << "________________________________"<< std::endl;
		std::cout << "++b_Operator_++a" << std::endl;
	std::cout << a.toFloat() << std::endl;
	std::cout << ++a << std::endl;
	std::cout << b.toFloat() << std::endl;
	std::cout << ++b << std::endl;
		std::cout << "________________________________"<< std::endl;
		std::cout << "Operators c = a + b" << std::endl;
	c = a + b;
	std::cout << c.toFloat() << std::endl;
	std::cout << a + b << std::endl;
		std::cout << "________________________________"<< std::endl;
		std::cout << "Operators c = a + b" << std::endl;
	// Fixed c = a + b;
	std::cout << c.toFloat() << std::endl;
	std::cout << a + b << std::endl;
		std::cout << "________________________________"<< std::endl;
		std::cout << "---------bool---------"<< std::endl;
		Fixed z(0);
		Fixed n(1); 
	  std::cout << (z <= (n) )<< std::endl;


	// std::cout << "tes"<< (1 << 8) << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	return 0; 
}
//