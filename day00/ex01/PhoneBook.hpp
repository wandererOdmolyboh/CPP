/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 18:05:08 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 10:30:37 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <iostream>

# define LEN 7

class Contact
{
	private:
	std::string Darkest_secret;
	public:
	int Index;
	std::string
	Firstname,
	Lastname,
	Nickname,
	Login,
	Address,
	Email_address,
	Phone_number,
	Birthday_date,
	Favorite_meal,
	Underwear_color;

	void print_spcae(std::string str);
	void print_info();
	void print_all_info();
	std::string Get_secret();
	void Set_secret(std::string secret);
};

#endif