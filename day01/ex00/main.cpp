/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 14:00:34 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 11:21:50 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"



void ponyOnTheHeap(int age, std::string name, double weight, double height)
{
	Pony *pony = new Pony(age, name, weight, height);

	std::cout << "Name : " << pony->Get_name() << std::endl 
	<< " Age : " << pony->Get_age() << std::endl
	<< " Weight : " << pony->Get_weight()<< std::endl
	<< " Height : " << pony->Get_height() << std::endl;
	return ;
}
void ponyOnTheStack(int age, std::string name, double weight, double height)
{
	Pony pony(age, name, weight, height);

	std::cout << "Name : " << pony.Get_name() << std::endl 
	<< " Age : " << pony.Get_age() << std::endl
	<< " Weight : " << pony.Get_weight()<< std::endl
	<< " Height : " << pony.Get_height() << std::endl;
	return ;
}

int main()
{
	std::cout << "//__P_O_N_Y__\\\\"<<std::endl;
	ponyOnTheHeap(1, "Tom", 0.4, 0.3);
	ponyOnTheStack(1, "Jery", 12, 1.5);
	std::cout << "\\\\__P_O_N_Y__//"<<std::endl;
	return (0);
}