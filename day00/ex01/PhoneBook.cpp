/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:53:29 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/08/31 10:32:51 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

std::string	Contact::Get_secret()
{
	return (Contact::Darkest_secret);
}

void	Contact::Set_secret(std::string secret)
{
	Contact::Darkest_secret = secret;
}

void	Contact::print_spcae(std::string str)
{
	int i = 0;
	int size = 10;
	int len = str.length();
	if (len > 9)
	{
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
	else
	{
		size = size - len;
		while (size > 0)
		{
			std::cout << " ";
			size--;
		}
		std::cout << str;
	}
}

void	Contact::print_info()
{
	std::cout <<"|         " << Index;
	std::cout << "|";
	print_spcae(Firstname);
	std::cout << "|";
	print_spcae(Lastname);
	std::cout << "|";
	print_spcae(Nickname);
	std::cout << "|";
	std::cout << std::endl;
}
	
void	Contact::print_all_info()
{
	std::cout << " Index " << Index << std::endl;
	std::cout << " Firstname " << Firstname << std::endl;
	std::cout << " Lastname " << Lastname << std::endl;
	std::cout << " Nickname " << Nickname << std::endl;
	std::cout << " Login " << Login << std::endl;
	std::cout << " Address " << Address << std::endl;
	std::cout << " Email_address " << Email_address << std::endl;
	std::cout << " Phone_number " << Phone_number << std::endl;
	std::cout << " Birthday_date " << Birthday_date << std::endl;
	std::cout << " Favorite_meal " << Favorite_meal << std::endl;
	std::cout << " Underwear_color " << Underwear_color << std::endl;
	std::cout << " Darkest_secret " << Get_secret()<< std :: endl;
}

Contact	add_user(int count)
{
	Contact contact;
	std::string secret;

	contact.Index = count;
	std::cout << "Firstname" << std::endl;
	std::cin >> contact.Firstname;
	std::cout << "Lastname" << std::endl;
	std::cin >> contact.Lastname;
	std::cout << "Nickname" << std::endl;
	std::cin >> contact.Nickname;
	std::cout << "Login" << std::endl;
	std::cin >> contact.Login;
	std::cout << "Address" << std::endl;
	std::cin >> contact.Address;
	std::cout << "Email_address" << std::endl;
	std::cin >> contact.Email_address;
	std::cout << "Phone_number" << std::endl;
	std::cin >> contact.Phone_number;
	std::cout << "Birthday_date" << std::endl;
	std::cin >> contact.Birthday_date;
	std::cout << "Favorite_meal" << std::endl;
	std::cin >> contact.Favorite_meal;
	std::cout << "Underwear_color" << std::endl;
	std::cin >> contact.Underwear_color;
	std::cout << "Darkest_secret" << std::endl;
	std::cin >> secret;
	contact.Set_secret(secret);
	return(contact);
}

void	print_action(void)
{
	std::cout << "------------------------------" << std::endl;
	std::cout << "\tEdit Contact Phone" << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "1. ADD" << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "2. SEARCH" << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "3. EXIT" << std::endl;
	std::cout << "------------------------------" << std::endl << std::endl;
}

int		main(void)
{
	std::string str;
	Contact contact[LEN + 1];
	int count = 0, cur = 0;

	while (1)
	{
		print_action();
		std::cin >> str;
		if (!str.find("ADD"))
		{
			if (count < LEN)
			{
				contact[count] = add_user(count);
			}
			else
				std::cout << "List is Full" << std::endl;
			count++;
		}
		else if (!str.find("SEARCH"))
		{
			if (count > 0)
			{
				std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
				while (cur < count)
				{
					contact[cur].print_info();
					cur++;
				}
				std::cout << "Put what is index open" << std::endl;	
				std::cin >> cur;
				if (cur < count)
					contact[cur].print_all_info();
				else
				{
					cur = 0;
					std::cout << "Not real index" << std::endl;
					break ;
				}
				cur = 0;
			}
			else
				std::cout << "Not a single contact" << std::endl;
		}
		else if (!str.find("EXIT"))
			return (0);
		else
			std::cout << "NOT FOUND COMMAND";
		std::cout << std::endl;
	}
	return (0);
}
